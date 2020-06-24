#include "Diary.h"


Diary::Diary(const std::string& filename)
	: filename{filename}, messages_size{0}, messages_capacity{100} {}

int Diary::add(const std::string& message)
{
    // adicionar mensagem no array de mensagens
	Message example;
	example.content = message;

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
