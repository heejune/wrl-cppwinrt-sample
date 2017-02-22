#include "pch.h"
#include "Message.h"

namespace ABI
{
	namespace SampleLib
	{

		Message::Message()
		{
		}

		STDMETHODIMP Message::get_Description(HSTRING* value)
		{
			return S_OK;
		}

		STDMETHODIMP Message::put_Description(HSTRING value)
		{
			return S_OK;
		}
	}
}