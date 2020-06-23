#include "Diary.h"

#include <iostream>
#include <fstream>

std::string get_current_date() { return format_current_date("%d/%m/%Y"); }
std::string get_current_time() { return format_current_date("%H:%M:%S"); }


Diary::Diary(const std::string& filename)
	: filename{filename}, messages_size{0}, messages_capacity{100} {}

int Diary::add(const std::string& message)
{
    // adicionar mensagem no array de mensagens
	Message example(message, get_current_date(), get_current_time());

    if (messages_size < messages_capacity)
    {
    	messages[messages_size] = example;
    	messages_size++;
    }
    else{
    	std::cout << "Erro: limite atingido" << std::endl;
    	return 1;
    }

    return 0;
}

int Diary::write()
{
    // gravar as mensagens no disco
}


std::string format_current_date(const std::string &format) {
  std::time_t time = std::time(nullptr);
  char result[1024];

  std::cout << sizeof(result) << std::endl;

  std::strftime(result, sizeof(result), format.c_str(), std::localtime(&time));

  return std::string(result);
}
