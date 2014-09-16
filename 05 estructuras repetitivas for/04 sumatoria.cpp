/*
Autor: Miguel Dussán

Escriba un programa que con ciclos anidados, muestre el resultado de la sumatoria mostrada en:

http://goo.gl/e1MrDS

Cuyo desarrollo matemático es como se muestra a continuación:

http://goo.gl/3v9JZa
*/

#include <stdio.h>

int main(){

	// Acumula el resultado de toda la sumatoria
	int res=0; 
	
	for(int x=1;x<=3;x++){
		/*
		Acumula el resultado de la sumatoria
		para una pareja x,y
		*/
		int acum = 0; 
		
		for(int y=5;y<=7;y++){
			acum = x*y+acum;

			// Imprime la multiplicación de los resultados recién acumulados
			printf("%i * %i = %i\n",x,y,x*y);
		}
		
		res = x + acum + res;
	
		// Imprime el resultado parcial de la sumatoria para el valor x
		printf("Resultado parcial: %i + %i = %i\n",x,acum,x+acum);

	}
	
	// Imprime el total de la sumatoria
	printf("Resultado: %i",res);

	system("PAUSE");
	return 0;
}
