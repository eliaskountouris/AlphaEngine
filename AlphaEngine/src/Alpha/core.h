#pragma once

#ifdef AP_PLATFORM_WINDOWS
	#ifdef AP_BUILD_DLL
		#define ALPHA_API __declspec(dllexport)
	#else
		#define ALPHA_API __declspec(dllimport)
	#endif
#else
	#error Alpha only supports Windows!
#endif
