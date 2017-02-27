#include "pch.h"
#include "CppUnitTest.h"
#include "..\SampleLib.Shared\DemoCore.h"

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::SampleLib::Demo;
#pragma comment(lib, "runtimeobject")

// from Win2D
#define TEST_METHOD_EX(METHOD_NAME)                                             \
    TEST_METHOD(METHOD_NAME)                                                    \
    {                                                                           \
        LifespanInfo::Reset();                                                  \
                                                                                \
        METHOD_NAME##_();                                                       \
                                                                                \
        auto liveObjectCount = LifespanInfo::ReportLiveObjects();               \
        Assert::AreEqual<size_t>(0, liveObjectCount, L"LifespanTracker leak");  \
    }                                                                           \
    void METHOD_NAME##_()


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SampleNativeTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD_EX(TestMethod1)
		{
			LifespanInfo::Reset();
			{
				auto lib = Make<DemoCore>();

				Microsoft::WRL::ComPtr<ABI::Windows::Foundation::IAsyncOperation<int>> pAsyncAction;

				// taken from https://github.com/walbourn/directx-sdk-samples/blob/master/XAudio2/XAudio2Enumerate/XAudio2Enumerate.cpp
				HRESULT hr = lib->GetCppwinrtDataAsync(pAsyncAction.GetAddressOf());

				Event asyncCompleted(CreateEventEx(nullptr, nullptr, CREATE_EVENT_MANUAL_RESET, WRITE_OWNER | EVENT_ALL_ACCESS));

				if (!asyncCompleted.IsValid())
				{
					Assert::IsTrue(SUCCEEDED(HRESULT_FROM_WIN32(GetLastError())));
				}

				auto callback = Callback< ABI::Windows::Foundation::IAsyncOperationCompletedHandler<int> >
					([&](ABI::Windows::Foundation::IAsyncOperation<int>* pHandler, AsyncStatus status)
				{
					SetEvent(asyncCompleted.Get());
					return S_OK;
				});

				hr = pAsyncAction->put_Completed(callback.Get());

				WaitForSingleObject(asyncCompleted.Get(), INFINITE);
				Assert::IsTrue(SUCCEEDED(hr));

				int result = 0;
				hr = pAsyncAction->GetResults(&result);
				Assert::IsTrue(SUCCEEDED(hr));
				Assert::AreEqual(result, 123);
			}
			auto liveObjectCount = LifespanInfo::ReportLiveObjects(); 
			Assert::AreEqual<size_t>(0, liveObjectCount, L"LifespanTracker leak"); 
		}
	};
}