#include <stdio.h>

int main() {
	// sin punteros
	char c[10] = {1,1,2,3,4,5,6,7,8,9};
	char b[10] = {9,8,7,6,5,4,3,5,1,0};
	char f[10];


	//con punteros
	char *ptr;
	char *ptr2;
	char *ptr3;
	ptr = c;
	ptr2 = b;
	ptr3 = f;


	//forma 1: Sin apuntaros
	for(int i = 0; i < 10; i++){
		if(c[i]+b[i] == 10){
			f[i] = c[i]+b[i];
			printf("f sin usar punteros es: %d\n",f[i]);
			printf("iteracion #: %d\n", i);
		}

		else {
			printf("NO HAY COINCIDENCIA\n");
		}

	}

	// Usando apuntadores
	for(int i = 0; i < 10; i++){
		if(*(ptr + i) + *(ptr2 + i) == 10) {
			
			*(ptr3 + i) = *(ptr + i) + *(ptr2 + i);
			printf("f usando apuntadores es: %d\n",*(ptr3 + i));
			

		} else {
			printf("NO HAY COINCIDENCIA\n");
		}

	}





	return 0;


}