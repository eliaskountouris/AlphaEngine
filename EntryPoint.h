#pragma once


#ifdef AP_PLATFORM_WINDOWS
	extern Alpha::application* Alpha::CreateApplication();

	int Main(int argc, char** argv) {
	printf("AlphaTest1\n");

	auto app = Alpha::CreateApplication();
	app->Run();
	delete app;
	return 1;
	}
#endif