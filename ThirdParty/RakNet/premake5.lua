project "RakNet"
    language "C++"
    kind "StaticLib"
    targetname "RakNet"
    characterset "MBCS"
    
    vpaths { 
        ["Headers/*"] = "**.h",
        ["Sources"] = "**.cpp",
        ["*"] = "premake5.lua"
    }
    
    defines { "_RAKNET_LIB" }
    
    files {
        "premake5.lua",
        "*.h",
        "*.cpp"
    }
