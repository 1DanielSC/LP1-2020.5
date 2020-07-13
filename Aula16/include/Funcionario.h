#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario
{
private:
	std::string Nome;
	double Salario;
	std::string DataAdmissao;
	std::string Departamento;

	static int quantidadeFuncionarios;

public:
	Funcionario(std::string nome = "None", double salario = 400.0, std::string dataAdmissao = "None", std::string departamento = "None");
	~Funcionario();

	void setNome(std::string nome);
	void setSalario(double salario);
	void setDataAdmissao(std::string dataAdmissao);
	void setDepartamento(std::string departamento);


	std::string getNome();
	double getSalario();
	std::string getDataAdmissao();
	std::string getDepartamento();
	
};


#endif