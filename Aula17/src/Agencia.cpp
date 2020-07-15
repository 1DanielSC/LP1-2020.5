#include "Agencia.h"
#include <string>

Agencia::Agencia(std::string nome, std::string numero, std::string cnpj)
	: Agencia_nome{nome}, Agencia_numero{numero}, CNPJ{cnpj} {}