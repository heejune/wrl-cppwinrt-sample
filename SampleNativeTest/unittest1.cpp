#include "stdafx.h"
#include "CppUnitTest.h"
//#include "..\SampleLib\SampleLib\SampleLib_h.h"
#include "..\SampleLib\SampleLib\DemoCore.h"

using namespace Microsoft::WRL;
using namespace ABI::SampleLib;
#pragma comment(lib, "runtimeobject")


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
			auto lib = Make<DemoCore>();
		}

	};
}