/*
Autor: Miguel Dussán
*/

#include <stdio.h>

#include <windows.h>

int main(){
	// Declaración e inicialización de variables
	float estatura = 1.70;
	int peso = 75;
	
	//Calculo del IMC, guardado en una nueva variable.
	
	float imc = peso / (estatura*estatura);
	
	// Imprimir resultados
	printf("El IMC para un peso %f y una estatura %i es %f",estatura,peso,imc);
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}
