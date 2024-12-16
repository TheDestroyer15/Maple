#pragma once
#include "../util/util.h"


namespace maple {

	namespace graphics {
		class window {
		private:
			u16 m_width;
			u16 m_height;
			std::string m_title;
		private:
			bool m_vsync;
			u16 m_fps;



		public:
			window(u16, u16, std::string);
			~window();

			bool Init();
			bool Update();
			bool Draw();
		};
	};
};