/*
Autor: Miguel Duss�n
*/

#include <stdio.h>

#include <windows.h>

int main(){

	// Declaraci�n e inicializaci�n de la variable entera
	int entero = 0;

	// Declaraci�n e inicializaci�n de la variable decimal
	float decimal = 3.14;

	// Declaraci�n e inicializaci�n de la variable decimal de doble precision
	double decimal2 = 5.4356;

	// Declaraci�n e inicializaci�n de un caracter
	char caracter = 'm';

	// Declaraci�n e inicializaci�n de una variable logica
	bool logico = 0;
	
	//Imprimir los valores
	
	printf("Entero: %d\n",entero);

	printf("Decimal: %f\n",decimal);

	printf("Decimal mas preciso: %f\n",decimal2);

	printf("Caracter: %c\n",caracter);
	
	printf("Logico: %d\n",logico);
	
	printf("\n"); // A�adir nueva l�nea al final
	
	system("PAUSE");
	
	return 0;
}
