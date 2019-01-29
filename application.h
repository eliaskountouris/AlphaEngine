#pragma once

#include "core.h"
namespace Alpha {
	class ALPHA_API application
	{
	public:
		application();
		virtual ~application();

		void Run();
	};
	application* CreateApplication();
	
}
