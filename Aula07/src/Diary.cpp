
#include "Diary.h"


Diary::Diary(const std::string& filename)
	: filename{filename}, messages{nullptr},messages_size{0}, messages_capacity{100}

  {
    messages = new Message[10];
    messages_size = 0;
  }

void Diary::add(const std::string& message)
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

      Message *buff = new Message[messages_size + 1];
      messages_capacity++;
      messages_size++;

      buff = messages;

      delete[] messages;

      messages = buff;
      messages[messages_size] = example;

    }

}

void Diary::write()
{
    // gravar as mensagens no disco
}

