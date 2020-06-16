#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		std::cout << "Uso: " << argv[0] << " add <nome>";
		return 0;
	}
	else if (std::strcmp(argv[1],"add") == 0 && argc == 2)
	{
		std::cout << "Digite a mensagem: ";
		std::string code;
		std::getline(std::cin, code);

		std::cout << "mensagem imprimida" << std::endl;
		return 0;
	}
	else if (std::strcmp(argv[1],"add") && argc > 2)
	{
		std::cout << "Mensagem: " << argv[3] << " adicionada" << std::endl;
		return 0;
	}
	
	return 1;
}
