#pragma once
#include "../util/util.h"


namespace maple {

	namespace graphics {
		class window {
		public:
			GLFWwindow* m_window;
		private:
			u16 m_width;
			u16 m_height;
			const char* m_title;
			
		private:
			bool m_vsync;
			u16 m_fps;



		public:
			window(u16, u16, const char*);
			~window();

			void init();
			void update() const;
			void draw() const;

			void clear() const;
			bool closed() const;
		};
	};
};