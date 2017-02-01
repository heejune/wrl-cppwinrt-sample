#pragma once

#include "SampleLib_h.h"

#include <wrl.h>

#include <wrl\async.h>
#include <windows.foundation.h>
#include <windows.foundation.collections.h>

using namespace Microsoft::WRL;

namespace ABI
{
	namespace SampleLib
	{
		class DemoCore : public RuntimeClass<IDemoCore>
		{
			InspectableClass(L"SampleLib.DemoCore", BaseTrust)

			unsigned m_progress;

			using IOnProgressChangedHandler = ABI::Windows::Foundation::ITypedEventHandler<DemoCore *, int>;
			EventSource<IOnProgressChangedHandler> m_events;

		public:
			DemoCore();

			STDMETHOD(get_Progress)(int* value) override;
			STDMETHOD(put_Progress)(int value) override;

			STDMETHOD(add_OnProgressChanged)(IOnProgressChangedHandler* handler, EventRegistrationToken* token);
			STDMETHOD(remove_OnProgressChanged)(EventRegistrationToken token);

			// async
			STDMETHOD(GetDataAsync)(::ABI::Windows::Foundation::IAsyncOperation<int>** value);
		};

		ActivatableClass(DemoCore);
	}
}
