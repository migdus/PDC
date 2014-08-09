/*
Autor: Miguel Dussán
*/

#include <stdio.h>
#include <windows.h>

int main(){
	int peso;
	float estatura,imc;

	printf("Peso? ");
	scanf("%i",&peso);

	printf("Estatura? ");
	scanf("%f",&estatura);

	imc = peso / (estatura * estatura);

	if(imc < 18.5){ // Si se encuentra por debajo de 18.5.
		printf("Su IMC es bajo.\n");
	}else{
		// Si tiene entre 18.5 y menos de 25 en el IMC
		if(imc<25){
			printf("IMC normal.\n");
		}
		else{
			// Si el IMC se encuentra entre 25 (inclusive) y menor que 30.
			if(imc < 30){ 
				printf("Tiene sobrepeso.\n");
			}
			// Si el IMC es de 30 o mayor.
			else{
				printf("Tiene obesidad.\n");
			}
		}
	}

	system("PAUSE");

	return 0;
}
