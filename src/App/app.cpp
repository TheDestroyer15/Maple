#include "window.h"

using namespace maple;

int main(void)
{
	graphics::window window(640,480,"MAPLE ENGINE");
	glad_glClearColor(1.0f, .2f, .2f, 1.0f);
	while (!window.closed()){
		window.clear();
		window.update();
	}

	return 0;
}