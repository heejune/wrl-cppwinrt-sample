#include "pch.h"
#include "DemoCore.h"
#include <future>

#include <assert.h>
#include "AsyncOperation.h"


namespace winrt::ABI::Windows::Foundation
{
	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0111")) __declspec(novtable) AsyncActionProgressHandler<int> : impl_AsyncActionProgressHandler<int> {};
	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0112")) __declspec(novtable) AsyncActionWithProgressCompletedHandler<int> : impl_AsyncActionWithProgressCompletedHandler<int> {};
	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0113")) __declspec(novtable) AsyncOperationProgressHandler<int, int> : impl_AsyncOperationProgressHandler<int, int> {};
	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0114")) __declspec(novtable) AsyncOperationWithProgressCompletedHandler<int, int> : impl_AsyncOperationWithProgressCompletedHandler<int, int> {};
	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0115")) __declspec(novtable) AsyncOperationCompletedHandler<int> : impl_AsyncOperationCompletedHandler<int> {};
	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0116")) __declspec(novtable) IAsyncActionWithProgress<int> : impl_IAsyncActionWithProgress<int> {};
	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0117")) __declspec(novtable) IAsyncOperation<int> : impl_IAsyncOperation<int> {};
	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf0118")) __declspec(novtable) IAsyncOperationWithProgress<int, int> : impl_IAsyncOperationWithProgress<int, int> {};
}

//namespace ABI::Windows::Foundation
//{
//	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf011a")) __declspec(novtable) IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> {};
//	template <> struct __declspec(uuid("3a14233f-a037-4ac0-a0ad-c4bb0bbf011b")) __declspec(novtable) IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> {};
//}

namespace _winrt
{
	using namespace winrt::Windows::Foundation;
	using namespace winrt::Windows::Web::Http;
}

using namespace std::chrono;

namespace ABI
{
	namespace SampleLib
	{
		DemoCore::DemoCore() : m_progress(0)
		{
		}

		STDMETHODIMP DemoCore::get_Progress(int* value)
		{
			*value = m_progress;
			return S_OK;
		}

		STDMETHODIMP DemoCore::put_Progress(int value)
		{
			if (m_progress != value)
			{
				m_progress = value;

				m_events.InvokeAll(this, m_progress);
			}

			return S_OK;
		}

		STDMETHODIMP DemoCore::add_OnProgressChanged(IOnProgressChangedHandler* handler, EventRegistrationToken* token)
		{
			m_events.Add(handler, token);
			return S_OK;
		}

		STDMETHODIMP DemoCore::remove_OnProgressChanged(EventRegistrationToken token)
		{
			m_events.Remove(token);
			return S_OK;
		}

		winrt::Windows::Foundation::IAsyncOperation<int> GetAsyncOp()
		{
			using namespace winrt;
			using namespace Windows::Foundation;

			for (int i = 0; i != 5; ++i)
			{
				co_await 5000ms;
			}

			return 1;
		}

		STDMETHODIMP DemoCore::GetCppwinrtDataAsync(::ABI::Windows::Foundation::IAsyncOperation<int>** value)
		{
			auto asyncOp = GetAsyncOp();

			*value = reinterpret_cast<::ABI::Windows::Foundation::IAsyncOperation<int>*>(winrt::detach(asyncOp));

			return S_OK;
		}

		STDMETHODIMP DemoCore::GetWrlDataAsync(::ABI::Windows::Foundation::IAsyncOperation<HSTRING>** value)
		{
			//asyncOperation.CopyTo(value);
			return S_OK;
		}

		STDMETHODIMP DemoCore::CrawlWeb(
			ABI::Windows::Foundation::IUriRuntimeClass *raw_uri,
			IAsyncHttpResultHandler **value)
		{
			_winrt::HttpClient client;
			auto winrt_abi_uri = reinterpret_cast<winrt::ABI::Windows::Foundation::IUriRuntimeClass *> (raw_uri);
			_winrt::IUriRuntimeClass runtimeUri;
			winrt::copy_from(runtimeUri, winrt_abi_uri);

			_winrt::Uri uri(runtimeUri.RawUri());

			auto op = client.GetBufferAsync(uri);
			
			// copy instead of detach?
			*value = reinterpret_cast<IAsyncHttpResultHandler*>(winrt::detach(op));
			//*value = reinterpret_cast<IAsyncHttpResultHandler*>(winrt::get(op));
			//winrt::copy_to(winrt::get(op), reinterpret_cast<IAsyncHttpResultHandler*>(*value));
			
			return S_OK;
		}
	}
}