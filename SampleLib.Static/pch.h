#pragma once

#include "targetver.h"

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <wrl.h>
#include <wrl\async.h>

#include <windows.foundation.h>
#include <windows.foundation.collections.h>

// Standard C++
#include <algorithm>
#include <assert.h>
#include <atomic>
#include <condition_variable>
#include <cstdint>
#include <functional>
#include <future>
#include <iterator>
#include <map>
#include <memory>
#include <mutex>
#include <queue>
#include <set>
#include <thread>
#include <type_traits>
#include <unordered_map>
#include <vector>


// from Win2D
#include <AsyncOperation.h>
#include <ClosablePtr.h>
#include <ComArray.h>
#include <Constants.h>
#include <ErrorHandling.h>
#include <LifespanTracker.h>
#include <Map.h>
#include <Nullable.h>
#include <ReferenceArray.h>
#include <RegisteredEvent.h>
#include <ScopeWarden.h>
#include <Singleton.h>
#include <Utilities.h>
#include <Vector.h>
#include <WinStringWrapper.h>
#include <WinStringBuilder.h>

// cppwinrt
#include <winrt/base.h>
#include <winrt\Windows.Web.Http.h>
