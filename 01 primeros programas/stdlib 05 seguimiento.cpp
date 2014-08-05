#include <stdio.h>
#include <windows.h>

int main(){
	// Declaración de variables
	
	int a,b;
	float c;
	bool d,e;
	b = 5;
	c = 5 / 3 - 4;
	a = a+b*c;
	d = a < b  || c + a - b % a <= 34;
	e = c - a > 4 && d;
	
	printf("Valores de las variables\n");
	
	printf("a: %i\n b: %i\n c: %f\n d: %d\n e: %d",a,b,c,d,e);
	
	printf("\n");
	
	system("PAUSE");
	
	return 0;
}
	
