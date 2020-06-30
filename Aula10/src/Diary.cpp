#include "Diary.h"
#include "CurrentTimeDate.h"
#include <string>
#include <fstream>
#include <iostream>

Diary::Diary(const std::string& filename)
	: filename{filename}, messages{nullptr}, messages_size{0}, messages_capacity{10}
{
    messages = new Message[messages_capacity];
}

Diary::~Diary()
{
    delete[] messages;
}  

//Funcao para adicionar mensagens a array "messages"
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

        messages = IncreaseSize();
        messages[messages_size] = example;
        messages_size++;
    }

}

//Funcao que escreve os dados da array "messages" no arquivo
//Nome do arquivo esta armazenado na string "filename"
bool Diary::write()
{
    // gravar as mensagens no disco

    std::ofstream file;
    file.open(this->filename);

    if (file.is_open())
    {
        int element{0};
        std::string date;
        std::string time;
        std::string content;

        for (size_t i = 0; i < messages_size; i++)
        {
            date = messages[element].date.to_string();
            time = messages[element].time.to_string();
            content = messages[element].content;

            if (verifyDate(this->filename, date))
            {
                file << "- " << time << " " << content << std::endl;

            }else{
                file << "# " << date << std::endl;
                file << "- " << time << " " << content << std::endl;
            }
            
            element++;
        }

        return true;
    }
    std::cout << "Erro ao abrir o arquivo" << std::endl;
    return false;  
}

//Funcao que carrega as informacoes presentes no arquivo "diary.md"
//Conteudo sera salvo na array "messages"
bool Diary::load()
{
    std::ifstream file;
    file.open(this->filename);

    if (file.is_open())
    {
        std::string line;

        std::string text;
        std::string time;
        std::string date;

        while(!file.eof())
        {
            getline(file, line);

            if (messages_size >= messages_capacity)
            {
                this->messages = IncreaseSize(); //Aumentar o tamanho da array "messages"
            }

            if (line.size() == 0){

                continue; //Evitar linhas em branco
            }

            if (line.at(0) == '#'){ //Linha contem a data

                date = line.substr(2,11);
                continue;
            }

            else if(line.at(0) == '-'){ //Linha com a hora e a mensagem

                time = line.substr(2,9); //Da posicao 2 a 9 da string line, encontra-se a hora

                this->messages[messages_size].time.set_from_string(time);
                this->messages[messages_size].date.set_from_string(date);

                text = line.substr(11); //Desta posicao em diante esta localizada a mensagem
                        //A posicao 10 eh um espaco em branco 

                this->messages[messages_size].content = text;

                this->messages_size++;
            }
        }

        return true;
    }
    std::cout << "Erro ao abrir o arquivo" << std::endl;
    return false;

}


//Funcao que retorna uma array Message com uma maior capacidade
//Os elementos sao mantidos
//Deep Copy, novo endereco para a array "messages" com o mesmo conteudo da array antiga
Message* Diary::IncreaseSize()
{
    Message *buff = new Message[this->messages_capacity * 2];
    
    for (size_t i = 0; i < this->messages_size; i++)
    {
        buff[i] = this->messages[i];
    }
    
    this->messages_capacity *= 2;
    

    delete[] this->messages;
    this->messages = buff;
    buff = nullptr;

    return this->messages;
}



//Funcao que verifica se uma data X ja foi inserida no arquivo
//Evitar datas iguais
bool Diary::verifyDate(const std::string& filename, const std::string& date)
{
    std::ifstream InFile;
    InFile.open(filename);

    if (InFile.is_open())
    {
        std::string line;
        while(!InFile.eof())
        {
            std::getline(InFile, line);
            if (line.size() == 0)
            {
                continue;
            }

            if (line == "# " + date){
                return true; //Existem mensagens no dia "date"
            }
        }
        return false;
    }

    std::cout << "O arquivo nao pode ser aberto" << std::endl;
    return false;
}


Message* Diary::search(const std::string& s)
{
    std::string line;
    for (size_t i = 0; i < this->messages_size; i++)
    {
        line = this->messages[i].content;
        if (line.find(s) != std::string::npos && &messages[i] != nullptr)
        {
            std::cout << "String encontrada!" << std::endl;
            return &messages[i];
        }
    }
    

    std::cout << "String nao encontrada!" << std::endl;
    return nullptr;
}
