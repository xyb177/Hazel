project "Glad"
	kind "StaticLib"
	language "C"
	staticruntime "off"

	targetdir ("bin/" .. outputdir .. "/%{prj.name}")
	objdir ("bin-int/" .. outputdir .. "/%{prj.name}")

	files
	{
		"include/Glad/Glad.h",
		"include/KHR/khrplatform.h",
		"src/Glad.c"
	}


	includedirs
	{
		"include"
	}
	filter "system:linux"
		pic "On"

		systemversion "latest"
		
		
	filter "system:macosx"
		pic "On"

		

	filter "system:windows"
		systemversion "latest"
		staticruntime "On"

	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"

	filter "configurations:Dist"
		runtime "Release"
		optimize "on"
        symbols "off"