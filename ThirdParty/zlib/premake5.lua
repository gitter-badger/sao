project "zlib"
    language "C++"
    kind "StaticLib"
    targetname "zlib"
    
    vpaths { 
        ["Headers/*"] = "**.h",
        ["Sources/*"] = "**.c",
        ["*"] = "premake5.lua"
    }
    
    files {
        "premake5.lua",
        "*.h",
        "*.c"
    }
