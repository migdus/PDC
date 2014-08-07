/*
Autor: Miguel Dussán
*/

#include <stdio.h>

#include <windows.h>

int main(){

	// Declaración e inicialización de la variable entera
	int entero = 0;

	// Declaración e inicialización de la variable decimal
	float decimal = 3.14;

	// Declaración e inicialización de la variable decimal de doble precision
	double decimal2 = 5.4356;

	// Declaración e inicialización de un caracter
	char caracter = 'm';

	// Declaración e inicialización de una variable logica
	bool logico = 0;
	
	//Imprimir los valores
	
	printf("Entero: %d\n",entero);

	printf("Decimal: %f\n",decimal);

	printf("Decimal mas preciso: %f\n",decimal2);

	printf("Caracter: %c\n",caracter);
	
	printf("Logico: %d\n",logico);
	
	printf("\n"); // Añadir nueva línea al final
	
	system("PAUSE");
	
	return 0;
}
