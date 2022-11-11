#include <string>
#include <iostream>
#include <set>

typedef int (*handler)();

enum commands
{
    list,
    upload,
    download,
    exec
};

typedef std::set<std::pair<enum commands, handler>> setHandlers;

int list_handler()
{
    std::cout << "in list cmd handler" << std::endl;
    return (0);
}

int upload_handler()
{
    std::cout << "in upload cmd handler" << std::endl;
    return (0);
}

int call_command_handler(enum commands command, setHandlers &handlers)
{
    auto it = handlers.begin();
    while (it != handlers.end())
    {
        if (it->first == command)
        {
            return (it->second());
        }
        it = std::next(it);
    }
    std::cout << "no handler for cmd " << command << std::endl;
    return (0);
}

int main()
{
    setHandlers handlers_set;
    handlers_set.insert(std::make_pair(list, (handler)list_handler));
    handlers_set.insert(std::make_pair(upload, (handler)upload_handler));

    call_command_handler(upload, handlers_set);
    call_command_handler(list, handlers_set);
    call_command_handler(exec, handlers_set);
    return (0);
}