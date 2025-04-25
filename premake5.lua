workspace "GarbageProject"
    architecture "x64"
    configurations { "Debug", "Release" }
    startproject "GarbageApp"

-- Libreria
project "GarbageLib"
    location "build/GarbageLib"
    kind "StaticLib"
    language "C++"
    cppdialect "C++17"
    targetdir "bin/%{cfg.buildcfg}"
    objdir "bin-int/%{cfg.buildcfg}"

    files { "src/lib/**.cpp", "src/lib/**.hpp" }

    includedirs { "src/lib" }

-- Applicazione
project "GarbageApp"
    location "build/GarbageApp"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    targetdir "bin/%{cfg.buildcfg}"
    objdir "bin-int/%{cfg.buildcfg}"

    files { "src/app/**.cpp" }

    includedirs {
        "src/lib"
    }
    links { "GarbageLib" }
    dependson { "GarbageLib" }

-- Test
project "GarbageTests"
    location "build/GarbageTests"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    targetdir "bin/%{cfg.buildcfg}"
    objdir "bin-int/%{cfg.buildcfg}"

    files { "src/tests/**.cpp","catch/catch_amalgamated.cpp" }

    includedirs {
        "src/lib",
        "catch"
    }
    links { "GarbageLib" }
    dependson { "GarbageLib" }
