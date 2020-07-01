#include "Diary.h"
#include "CurrentTimeDate.h"
#include <string>
#include <fstream>
#include <iostream>

#include <vector>
#include <iterator>

Diary::Diary(const std::string& filename)
	: filename{filename} {}


//Funcao para adicionar mensagens no vector "messages"
void Diary::add(const std::string& message)
{
    Message example;
    example.content = message;

    std::string CurrentDate = get_current_date();
    std::string CurrentTime = get_current_time();

    example.date.set_from_string(CurrentDate);
    example.time.set_from_string(CurrentTime);

    messages.push_back(example);
}



//Funcao que escreve os dados do vector "messages" no arquivo
//Nome do arquivo esta armazenado na string "filename"
bool Diary::write()
{
    // gravar as mensagens no disco

    std::ofstream file;
    file.open(this->filename);

    if (file.is_open())
    {
        std::string date;
        std::string time;
        std::string content;
        std::vector<Message>::iterator it;

        for (it = messages.begin(); it != messages.end(); it++)
        {
            date = it->date.to_string();
            time = it->time.to_string();
            content = it->content;

            if (verifyDate(this->filename, date))
            {
                file << "- " << time << " " << content << std::endl;

            }else{
                file << "# " << date << std::endl;
                file << "- " << time << " " << content << std::endl;
            }
            
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

        Message example;

        while(!file.eof())
        {
            getline(file, line);

            if (line.size() == 0){

                continue; //Evitar linhas em branco
            }

            if (line.at(0) == '#'){ //Linha contem a data

                date = line.substr(2,11);
                continue;
            }

            else if(line.at(0) == '-'){ //Linha com a hora e a mensagem

                time = line.substr(2,9); //Da posicao 2 a 9 da string line, encontra-se a hora
                text = line.substr(11); //Desta posicao em diante esta localizada a mensagem
                        //A posicao 10 eh um espaco em branco

                example.time.set_from_string(time);
                example.date.set_from_string(date);
                example.content = text;

                messages.push_back(example);
            }
        }

        return true;
    }
    std::cout << "Erro ao abrir o arquivo" << std::endl;
    return false;

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


std::vector<Message*> Diary::search(const std::string& s)
{

    std::vector<Message*> result;
    std::vector<Message>::iterator it;

    std::string line;

    Message* ptr;

    for (it = this->messages.begin(); it != messages.end(); it++)
    {
        line = it->content;
        if (line.find(s) != std::string::npos)
        {
            ptr = &(*it);
            result.push_back( ptr );
        }
    }

    return result;
}
