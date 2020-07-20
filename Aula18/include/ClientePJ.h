#ifndef CLIENTEPJ_H
#define CLIENTEPJ_H

#include <string>
#include "Cliente.h"


class ClientePJ: public Cliente{
private:
	std::string CNPJ;
	std::string RazaoSocial;

public:
	ClientePJ(std::string nome = "None", std::string dataAdmissao = "xx/xx/xxxx", std::string cnpj = "None", std::string razaoSocial = "None");

	std::string getCNPJ();
	std::string getRazaoSocial();
	
	void setCNPJ(std::string cnpj);
	void setRazaoSocial(std::string razaoSocial);
  	void display();

};


#endif