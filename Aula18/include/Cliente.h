#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
private:
	std::string Nome;
	std::string DataAdmissao;

public:

	Cliente(std::string nome = "None", std::string dataAdmissao = "xx/xx/xxxx");

	void setNome(std::string nome);
	void setDataAdmissao(std::string dataAdmissao);

  std::string getNome();
  std::string getDataAdmissao();	
};

#endif
