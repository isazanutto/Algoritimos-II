// ConsoleApplication1.cpp : define o ponto de entrada para o aplicativo do console.
//

// ConsoleApplication1.cpp : define o ponto de entrada para o aplicativo do console.
//

#include "stdafx.h"
#include <iostream>

int soma(int x, int y)
{
	int a = x + y;
	return a;
}
int subtracao(int x, int y)
{
	int a = x - y;
	return a;
}
float divisao(float x, float y)
{
	float a = x / y;
	return a;
}
float multiplicacao(float x, float y)
{
	float a = x * y;
	return a;
}

int main() {

	int a, b;

	printf("Entre com dois números inteiros: \n");
	scanf_s("%i %i", &a, &b);

	int r = soma(a, b);
	int s = subtracao(a, b);
	float d = divisao(a, b);
	float m = multiplicacao(a, b);

	printf("Soma: %i \n", r);
	printf("Subtração: %i \n", s);
	printf("Divisão: %f \n", d);
	printf("Multiplicação: %f \n", m);

	system("pause");


}






