#ifndef SEGURANCA_H
#define SEGURANCA_H

#include "Funcionario.h"
#include <string>

class Seguranca: public Funcionario{
private:

	std::string SetorResponsavel;
	std::string Turno;

public:

	Seguranca(std::string nome = "None", int idade = 0, std::string setor = "None", std::string turno = "None");

	void setSetorResponsavel(std::string setor);
	void setTurno(std::string turno);

	std::string getSetorResponsavel();
	std::string getTurno();

	void display();	
};

#endif