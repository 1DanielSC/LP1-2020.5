#include <iostream>
#include <string>
#include <fstream>


int list()
{
	std::ifstream file;
	file.open("arquivo.txt");


	if (!file.is_open())
	{
		std::cout << "Erro: o arquivo nao esta aberto" << std::endl;
		return 1;
	}

	std::string message;
	int line_number{0};

	while(!file.eof())
	{
		getline(file, message);
		if (message.size() == 0)
		{
			continue;
		}

		std::cout << line_number << ". " << message << std::endl;
	}

	return 0;
}


int write_file(const std::string& mensagem)
{
	std::ofstream file;
	file.open("arquivo.txt", std::ios_base::app);

	if (file.fail())
	{
		std::cout << "Erro ao abrir o arquivo" << std::endl;
		return 1;
	}
	if (file.is_open())
	{
		file << mensagem << std::endl;
		std::cout << "Mensagem salva no arquivo" << std::endl;
		file.close();
		return 0;
	}
	
	std::cout << "Falha ao escrever no arquivo" << std::endl;
	return 1;
}


int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "Uso: " << argv[0] << " add <nome>";
		return 0;
	}

	std::string parameter1 = argv[1];
	if (parameter1 == "add" && argc == 2)
	{
		std::cout << "Digite a mensagem: ";
		std::string code;
		std::getline(std::cin, code);

		std::cout << "mensagem imprimida" << std::endl;
		return 0;
	}


	if (parameter1 == "list" && argc == 2)
	{
		return list();
	}


	std::string mensagem = argv[2];

	if (parameter1 == "add" && argc > 2)
	{
		std::cout << "Mensagem: " << mensagem << " adicionada" << std::endl;
		return write_file(mensagem);
	}

	return 1;
}
