#include <iostream>
#include <cstdlib>

using namespace std;

/*
Prototipo de la función que imprime el arreglo
- El primer parámetro indica que recibe un arreglo de tipo entero.
- El segundo parámetro indica que recibe un entero.
*/
void imprimir_arreglo(int [],int);

int main(){
	// Declarar y llenar un arreglo con datos de ejemplo
	int x [4] = {12,3,54,1};
         // Invocación de la función.
	imprimir_arreglo(x,4);
}

/*
Imprime un arreglo.
Parámetros:
    El arreglo.
    El tamaño del arreglo.
*/
void imprimir_arreglo(int arreglo[],int tam){
	for(int i=0;i<tam;i++){
		cout << arreglo[i] << " ";
	}
	return;
}
