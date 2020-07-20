#include "Cliente.h"
#include "ClientePF.h"
#include "ClientePJ.h"
#include "Funcionario.h"
#include "Gerente.h"
#include "Caixa.h"
#include "Seguranca.h"

#include <string>
#include <iostream>

int main(int argc, char const *argv[])
{
	ClientePF exemplo{"Daniel", "10/08/2018" ,"108.999.999-48", 20, "98825-1260"};
	exemplo.display();

  	ClientePJ empresa{"Extra", "10/08/2000", "64.808.316/0001-97", "Extra ltda"};
  	empresa.display();
	
  	Gerente exemplo1{"Daniel", 18, "Gerente", 50};
  	exemplo1.display();
	
  	Caixa exemplo2{"Daniel", 18, 50, 50, 520.99};
  	exemplo2.display();

  	Seguranca exemplo3("Daniel", 18, "Frutas", "Integral");
  	exemplo3.display();

	return 0;
}