#pragma once

#include "SampleLib_h.h"

#include <wrl.h>

using namespace Microsoft::WRL;

namespace ABI
{
	namespace SampleLib
	{
		class DemoCore : public RuntimeClass<IDemoCore>,
			private LifespanTracker<DemoCore>
		{
			InspectableClass(L"SampleLib.DemoCore", BaseTrust)

			unsigned m_progress;

			using IOnProgressChangedHandler = ABI::Windows::Foundation::ITypedEventHandler<DemoCore *, int>;
			using IAsyncHttpResultHandler = ::ABI::Windows::Foundation::IAsyncOperationWithProgress<ABI::Windows::Storage::Streams::IBuffer*, ABI::Windows::Web::Http::HttpProgress>;
			EventSource<IOnProgressChangedHandler> m_events;

		public:
			DemoCore();

			STDMETHOD(get_Progress)(int* value) override;
			STDMETHOD(put_Progress)(int value) override;

			STDMETHOD(add_OnProgressChanged)(IOnProgressChangedHandler* handler, EventRegistrationToken* token);
			STDMETHOD(remove_OnProgressChanged)(EventRegistrationToken token);

			// async
			STDMETHOD(GetCppwinrtDataAsync)(::ABI::Windows::Foundation::IAsyncOperation<int>** value);
			STDMETHOD(GetWrlDataAsync)(::ABI::Windows::Foundation::IAsyncOperation<HSTRING>** value);

			STDMETHOD(CrawlWeb)(ABI::Windows::Foundation::IUriRuntimeClass *uri,
				IAsyncHttpResultHandler **value);

		};

		ActivatableClass(DemoCore);
	}
}
