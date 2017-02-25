#pragma once

#include "SampleLib_h.h"

#include <wrl.h>
#include <winerror.h>
#include <Windows.Foundation.h>
#include <wrl\implements.h>
#include <wrl\event.h>
#include <windows.system.threading.h>

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;
using namespace ABI::Windows::Foundation;
using namespace ABI::Windows::System::Threading;

namespace ABI { namespace SampleLib { namespace Demo {

	class DemoCore WrlFinal  : public RuntimeClass<IDemoCore>, private LifespanTracker<DemoCore>
	{
		InspectableClass(RuntimeClass_SampleLib_Demo_DemoCore, TrustLevel::BaseTrust)

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
} /* Demo */ } /* SampleLib */ } /*ABI */
