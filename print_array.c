/*El programa imprimira un arreglo*/

#include <stdio.h>

/*
	%d imprime enteros
	%c imprime caracteres

*/


int main() {

	char A[8] = {1,2,3,4,5,6,7,8};
	char *ptr;
	ptr = A;
	char B[8];
	char *ptr2; //cuando el puntero se asigna ya queda apuntado a dicho array
	ptr2 = B;

	//Declarar int i = 0 dentro del ciclo for no se permite en todas las versiones de C
	for(int i = 0; i < 8; i++){

		//passing values from array A to B
		*(ptr2 + i) = *(ptr + i);		

	}
	//Imprime vector
	for (int j = 0; j < 8; j++ ){
		
		if(j == 0){
			printf("\t\t");
		}
		printf("%d",*ptr2++);

		if(j == 7){
			printf("\n");
		}
	}

	return 0;
	
}