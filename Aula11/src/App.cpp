#include "App.h"

#include <iostream>
#include <string>
#include <vector>

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
        
    } else if(action == "search")
    {
        search_message(argv[2]);
    }
    else{
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

    if (diary.messages.size() == 0)
    {
        std::cout << "O arquivo esta vazio!" << std::endl;
        return;
    }
/*
    std::vector<int>::iterator it;

    for (it = diary.messages.begin(); it != diary.messages.end(); it++) {
        //const Message& message = diary.messages[i];
        const Message& message = *it;
        std::cout << "-" << message.content << std::endl;
    }
*/
    for (const auto& message: diary.messages)
    {
        std::cout << message.content << std::endl;
    }

}


void App::search_message(const std::string& s)
{
    diary.load();
    std::vector<Message*> result;
    result = diary.search(s);

    if (result.size() == 0)
    {
        std::cout << "String nao encontrada!" << std::endl;
        return;
    }

    std::cout << "Mensagens presentes: " << std::endl;

    for (const auto& string : result)
    {
        std::cout << string->content << std::endl;
    }
}


int App::show_usage()
{
    std::cout << "Usos: "<< std::endl; 
    std::cout << "./programa add <mensagem>" << std::endl;
    std::cout << "./programa list" << std::endl;
    return 1;
}
