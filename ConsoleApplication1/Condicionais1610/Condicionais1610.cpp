// Condicionais1610.cpp : define o ponto de entrada para o aplicativo do console.
//


#include "stdafx.h"
#include <iostream>
#include <locale.h>


int maior(int a, int b, int c, int d)
{
	if (a>=b && a>=c && a>=d)
	{
		return a;
	}

	if (b>=a && b>=c && b>=d)
	{

		return b;
	}

	if (c>=a && c>=b && c>=d)
	{
		return c;
	}

	else
	{

		return d;
	}
}
float media(int a, int b, int c, int d) {

	float med = ((a + b + c + d) / 4);

	return med;
}
void maiores (int a, int b, int c, int d, float med){
	
	printf("Valores maiores que a média: \n");
	if (med < a)
	{
		printf("i% \n",a);
	}
	if (med <b)
	{
		printf ( "%i \n",b);
	}
	if (med < c)
	{
	printf ("%i \n",c);
	}
	else
	{
		if (med < d)
		{
			printf("%i \n", d);
		}
	}
	
}
int main()
{
	int a,b,c,d;

	printf("Entre com quatro números inteiros: \n");
	scanf_s("%i %i %i %i",&a,&b,&c,&d );
	
	int m = maior(a, b, c, d);
	float t = media(a, b, c, d);
    maiores(a,b,c,d,t);
	
	printf("Maior número: %i \n", m);
	printf("Média: %f \n",t);
	
	
	system ("pause");


}

