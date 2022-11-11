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

int list_handler()
{
    std::cout << "in list cmd handler" << std::endl;
    return (0);
}

int upload_handler()
{
    std::cout << "in upload cmd heandler" << std::endl;
    return (0);
}

int main()
{
    std::string s = "command system is important";
    std::map<enum commands, handler> handlers_dict;

    handlers_dict[list] = (handler)list_handler;
    handlers_dict[upload] = (handler)upload_handler;

    handlers_dict[list]();
    handlers_dict[upload]();
    return (0);
}