#include <iostream>
#include <string>
#include <fstream>

bool write_file(const std::string& mensagem)
{
	std::ofstream arquivo_entrada;
	arquivo_entrada.open("arquivo.txt");

	if (arquivo_entrada.fail())
	{
		std::cout << "Erro ao abrir o arquivo" << std::endl;
		return false;
	}
	if (arquivo_entrada.is_open())
	{
		arquivo_entrada << mensagem;
		std::cout << "Mensagem salva no arquivo" << std::endl;
		arquivo_entrada.close();
		return true;
	}
	
	std::cout << "Falha ao escrever no arquivo" << std::endl;
	return false;
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

	std::string mensagem = argv[2];
	if (parameter1 == "add" && argc > 2)
	{
		std::cout << "Mensagem: " << mensagem << " adicionada" << std::endl;
		write_file(mensagem);
		return 0;
	}
	
	return 1;
}
