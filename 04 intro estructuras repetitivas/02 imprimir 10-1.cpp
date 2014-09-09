// Autor: Miguel Dussán

/*
Programa que muestra los números desde 10 hasta 1 
utilizando ciclo mientras
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

	//Variable de control de ciclo
	//También se utiliza para mostrar el número actual dentro del ciclo

	int i = 10;

	while(i >= 1){ //Abre ciclo mientras

		cout << i << endl;  //imprime el número

		// Decremento de la variable de control
		i--; //equivalente a: numero = numero - 1 
	} // Cierra ciclo mientras

	system("pause");
	
	return 0;
}
