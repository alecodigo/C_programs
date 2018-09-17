#include <stdio.h>

int factorial(int n);
int main() {

	//Factorial de un numero

	

	return 0;
}



int factorial(int n) {

	int  n = 0, factorial = 1;
	printf("CALCULO DEL FACTORIAL DE UN NUMERO\n");
	printf("INGRESE UN NUMERO\n");
	scanf("%d",&n);
	

	while(n > 1) {


		factorial = factorial * n;
		printf("El factorial es: %d\n", factorial);
		
		n--; // esta linea reduce el valor de n 
		
	}

	return 0;
}