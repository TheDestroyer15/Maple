#pragma once
#include "core.h"

namespace Maple{

	class MAPLE_API app {

		public:
			app();
			virtual ~app();

			void Run();
	};

	
	app* CreateApplication();

};
