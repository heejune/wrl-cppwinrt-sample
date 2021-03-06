#pragma once

#include "SampleLib_h.h"

#include <wrl.h>

#include "SampleLib_h.h"
#include <wrl\async.h>
#include <windows.foundation.h>
#include <windows.foundation.collections.h>

using namespace Microsoft::WRL;

namespace ABI { namespace SampleLib { namespace Demo {
	class Message : public RuntimeClass<IMessage>, private LifespanTracker<DemoCore>
	{
		InspectableClass(RuntimeClass_SampleLib_Demo_Message, TrustLevel::BaseTrust)
	public:
		Message();

		STDMETHOD(get_Description)(HSTRING* value) override;
		STDMETHOD(put_Description)(HSTRING value) override;
	};

	ActivatableClass(Message);
} /* Demo */ } /*SampleLib */  } /* ABI */