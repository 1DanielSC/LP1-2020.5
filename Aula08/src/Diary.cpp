#include "Diary.h"
#include "CurrentTimeDate.h"

Diary::Diary(const std::string& filename)
	: filename{filename}, messages{nullptr},messages_size{0}, messages_capacity{100}

  {
    messages = new Message[messages_capacity];
    messages_size = 0;
  }
Diary::~Diary()
{
  delete[] messages;
}  

void Diary::add(const std::string& message)
{
    // adicionar mensagem no array de mensagens
    Message example;
    example.content = message;

    std::string CurrentDate = get_current_date();
    std::string CurrentTime = get_current_time();

    example.date.set_from_string(CurrentDate);
    example.time.set_from_string(CurrentTime);


    if (messages_size < messages_capacity)
    {
    	messages[messages_size] = example;
    	messages_size++;
    }
    else{

      Message *buff = new Message[messages_size + 1];
      messages_capacity++;
      messages_size++;

      for (size_t i = 0; i < messages_capacity; i++)
      {
        if (i == messages_capacity - 1)
        {
          buff[i] = example;
          break;
        }
        buff[i] = messages[i];
      }

      delete[] messages;
      messages = buff;
      buff = nullptr;

    }

}

void Diary::write()
{
    // gravar as mensagens no disco
}
