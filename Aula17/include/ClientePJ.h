#ifndef CLIENTEPJ_H
#define CLIENTEPJ_H

#include <string>

class ClientePJ
{
private:
	std::string CNPJ;
	std::string RazaoSocial;

public:
	ClientePJ(std::string cnpj = "None", std::string razaoSocial = "None");
	~ClientePJ();


	std::string getCNPJ();
	std::string getRazaoSocial();
	
	void setCNPJ(std::string cnpj);
	void setRazaoSocial(std::string razaoSocial);
  	void display();
};

#endif