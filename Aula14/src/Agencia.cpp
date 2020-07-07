#include "Agencia.h"
#include <string>

Agencia::Agencia(std::string nome, std::string numero, std::string cnpj)
	: Nome{nome}, Numero{numero}, CNPJ{cnpj} {}