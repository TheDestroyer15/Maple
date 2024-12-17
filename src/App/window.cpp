#include "window.h"



namespace maple {

	namespace graphics {
		
		window::window(u16 width, u16 height, const char* title) {
			this->m_width = width;
			this->m_height = height;
			this->m_title = title;
			window::init();
		}
		
		
		window::~window() {

		}

		void window::init() {
			
			if (!glfwInit()) {
				glfwTerminate();
				std::cout << "FAILED TO INITIATE GLFW" << std::endl;
				return;
			}
			this->m_window = glfwCreateWindow(m_width, m_height, m_title, NULL, NULL);
			

			if (!this->m_window) {
				glfwTerminate();
				std::cout << "FAILED TO INITIALTE GLFW WINDOW" << std::endl;
				return;
			}

			glfwMakeContextCurrent(this->m_window);
			gladLoadGL();
		}

		void window::update() const {
			glfwPollEvents();
			glfwSwapBuffers(m_window);
		}

		void window::draw() const {

		}

		bool window::closed() const{
			return glfwWindowShouldClose(this->m_window);
		}

		void window::clear() const {
			glad_glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		}
	};
};