#ifndef FILA_H
#define FILA_H
#include <iostream>

template <class T>
class Fila
{
private:
	int size;
	int front;
	int rear;

	T* elements;

public:
	

Fila(int size)
	: size{size}, front{-1}, rear{-1}
	{
		this->elements = new T[size];
	}


~Fila() 
{
	delete[] elements;
}


bool isEmpty()
{
	if (this->front == -1)
	{
		std::cout << "Fila vazia" << std::endl;
		return true;
	}
  return false;
}

bool isFull()
{
	if (this->rear == this->size)
	{
		std::cout << "Fila cheia" << std::endl;
		return true;
	}
  return false;
}


bool pop()
{
	if (this->isEmpty())
	{
		return false;
	}

	if (this->front == this->rear)
	{
		this->front = this->rear = -1;
		return true;
	}

	this->front++;
	return true;
}


bool push(T value)
{	
	if (this->isFull())
	{
		return false;
	}

	if (this->front == -1)
	{
		this->front = 0;
	}

	this->rear++;
	elements[rear] = value;
	return true;
}



void display()
{
	if (this->isEmpty())
	{
		return;
	}

	for (int i = this->front; i < this->rear + 1; i++)
	{
    
		elements[i].display();
	}
	return;
}
};
#endif
