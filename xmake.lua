add_requires("raylib")
add_rules("mode.debug", "mode.release")

target("my_game")
set_kind("binary")
add_files("src/*.cpp")
add_includedirs("include")
add_packages("raylib")

if is_plat("macosx") then
	add_frameworks("OpenGL")
end

set_languages("c++11")

add_cxflags("-Wall", "-Wextra")

set_targetdir("bin")
