#include "Funcionario.h"
#include "Empresa.h"
#include <string>
#include <iostream>

int main()
{
	Empresa empresa;
	empresa.setNome("Extra");
	empresa.setCNPJ("42.318.949/0001-84");

	empresa.AdicionarFuncionario("Daniel", 450.0, "25/08/2016");
	empresa.AdicionarFuncionario("Felipe", 450.0, "25/07/2016");
	empresa.AdicionarFuncionario("Carlos", 450.0, "25/06/2016");

	empresa.AumentoSalarial();

	empresa.Deallocate();
	return 0;
}
