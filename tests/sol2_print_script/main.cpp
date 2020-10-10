#include <filesystem>

#define SOL_ALL_SAFETIES_ON 1
#include <sol/sol.hpp>

int main()
{
    sol::state lua;
    lua.open_libraries(sol::lib::base, sol::lib::package);

    // ${PROJECT_SOURCE_DIR}/cmake-build-debug/tests/sol2_print_script/
    std::filesystem::path scriptPath = "../../../tests/sol2_print_script/script.lua";
    if(!std::filesystem::exists(scriptPath))
    {
        std::cerr << "Script file does not exist" << std::endl;
        return 1;
    }

    lua.script_file(scriptPath.string(), sol::load_mode::text);
}
