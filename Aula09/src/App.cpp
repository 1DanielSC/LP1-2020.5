#include "App.h"

#include <iostream>
#include <string>

App::App(const std::string& filename) : diary(filename)
{
}

int App::run(int argc, char* argv[])
{
    if (argc == 1) {
        return show_usage();
    }

    std::string action = argv[1];

    if (action == "add") {
        if (argc == 2) {
            add();
        } else {
            add(argv[2]);
        }

    }else if(action == "list"){
        list_messages();
        
    }else{
        return show_usage();
    }

    return 0;
}

void App::add()
{
    std::string message;
    std::cout << "Enter your message:" << std::endl;
    std::getline(std::cin, message);

    add(message);
}

void App::add(const std::string message)
{
    diary.load();
    diary.add(message);
    diary.write();
}

void App::list_messages()
{
    diary.load();

    if (diary.messages_size == 0)
    {
        std::cout << "O arquivo esta vazio!" << std::endl;
        return;
    }

    for (size_t i = 0; i < diary.messages_size; i++) {
        const Message& message = diary.messages[i];
        std::cout << "-" << message.content << std::endl;
    }

}

int App::show_usage()
{
    std::cout << "Usos: "<< std::endl; 
    std::cout << "./programa add <mensagem>" << std::endl;
    std::cout << "./programa list" << std::endl;
    return 1;
}
