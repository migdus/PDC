/*
Autor: Miguel Dussán
*/

#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	//Declaración de variables
	float estatura;
	int peso;
	
	cout << "Estatura? "; 	// Preguntar por la estatura
	cin >> estatura;		//Capturar el valor en la variable estatura

	cout << "Peso? ";		// Preguntar por el peso
	cin >> peso;			//Capturar el valor en la variable peso
	
	// Calcular e imprimir resultados
	float imc = peso / (estatura*estatura);

	cout << "El IMC para un peso " << peso << "y una estatura " << estatura << " es " << imc;

	system("PAUSE");
	return 0;
}
