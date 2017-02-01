#include "pch.h"
#include "DemoCore.h"

// async support
#include <winrt/base.h>

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

		STDMETHODIMP DemoCore::GetDataAsync(::ABI::Windows::Foundation::IAsyncOperation<int>** value)
		{
			return S_OK;
		}

	}
}