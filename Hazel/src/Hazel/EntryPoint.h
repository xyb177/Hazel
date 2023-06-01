#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc ,char** argv) {
	printf("Hazel Engine");
	Hazel::Log::Init();
	HZ_CORE_WARN("Init Log!");
	HZ_INFO("Init Log!");
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}
#endif