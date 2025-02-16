#pragma once

#ifdef MP_PLATFORM_WINDOWS


extern Maple::app* Maple::CreateApplication();

int main(int argc, char** argv) {

	printf("Maple Engine!\n");
	auto app = Maple::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif