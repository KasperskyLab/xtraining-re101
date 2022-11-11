#include <string>
#include <iostream>
#include <map>

typedef int (*handler)();

enum commands
{
    list,

    upload,
    download,
    exec
};

int main()
{
    std::string s = "command system is important";
    std::map<enum commands, handler> handlers_dict;
    handlers_dict[list] = nullptr;
    handlers_dict[upload] = nullptr;
    return (0);
}
