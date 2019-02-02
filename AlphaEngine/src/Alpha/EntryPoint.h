#pragma once

#ifdef AP_PLATFORM_WINDOWS

extern Alpha::application* Alpha::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Alpha::CreateApplication();
	app->Run();
	delete app;
}

#endif