#ifndef CARRO_H
#define CARRO_H

#include <string>

class Carro
{
public:

	std::string Placa;
	std::string Cor;
	std::string Tipo;

	int Velocidade;
	int NumeroPortas;

	static int quantidadeCarros;

	Carro(std::string placa = "None", std::string cor = "None", std::string tipo = "None", int velocidade = 0, int numero_Portas = 0);
	Carro(const Carro& oldCar);
	~Carro();

	void acelerar(int value);
	void frear(int value);
	void Display();
};

#endif
