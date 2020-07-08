#include "Carro.h"
#include <string>
#include <iostream>

int Carro::quantidadeCarros = 0;

Carro::Carro(std::string placa, std::string cor, std::string tipo, int velocidade, int numero_Portas)
	: Placa{placa}, Cor{cor}, Tipo{tipo}, Velocidade{velocidade}, NumeroPortas{numero_Portas} 
	{
		quantidadeCarros++;
	}


Carro::Carro(const Carro& oldCar)
{
	this->Placa = oldCar.Placa;
	this->Cor = oldCar.Cor;
	this->Tipo = oldCar.Tipo;

	this->NumeroPortas = oldCar.NumeroPortas;
	this->Velocidade = oldCar.Velocidade;

	quantidadeCarros++;
}


Carro::~Carro()
{
	this->quantidadeCarros--;
}

void Carro::acelerar(int value)
{
	this->Velocidade += value;
}

void Carro::frear(int value)
{
	this->Velocidade -= value;
}

void Carro::Display()
{
	std::cout << "Informacoes do carro" << std::endl;
	std::cout << "Placa do carro: " << this->Placa << std::endl;
	std::cout << "Cor do carro: " << this->Cor << std::endl;
	std::cout << "Tipo do carro: " << this->Tipo << std::endl;
	std::cout << "Velocidade do carro: " << this->Velocidade << "Km/h" << std::endl;
	std::cout << "Numero de portas no carro: " << this->NumeroPortas << std::endl;
}