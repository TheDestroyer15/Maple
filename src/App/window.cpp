#include "window.h"



namespace maple {

	namespace graphics {
		
		window::window(u16 width, u16 height, std::string title) {
			this->m_width = width;
			this->m_height = height;
			this->m_title = title;

		}
		
		
		window::~window() {

		}

		bool Init() {
			
		}
	};
};