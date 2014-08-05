#include <stdio.h>
#include <windows.h>
int main(){
	//Declaración de variables
	float estatura;
	int peso;
	
	printf("Estatura?: "); // Preguntar por la estatura
	scanf("%f", &estatura); //Capturar el valor en la variable estatura
	
	
	printf("Peso?: "); // Preguntar por el peso
	scanf("%i", &peso); //Capturar el valor en la variable peso
	
	// Calcular e imprimir resultados
	float imc = peso / (estatura*estatura);
	printf("El IMC para un peso %f y una estatura %i es %f",estatura,peso,imc,false);
	
	printf("\n");
	
	system("PAUSE");
	return 0;
}
