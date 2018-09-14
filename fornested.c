#include <stdio.h>

int main() {

	//vectores
 	int a[10] = {0,1,2,3,4,5,6,7,8,9};
 	int b[10] = {9,8,7,6,5,4,3,2,1,0};
 	int f[10] = {};


 	for(int i = 0; i < 10; i++) {

 		f[i] = a[i] * b[i];
		printf("f[%d] : f[%d]\n", i, f[i]);

 		for(int j = 0; j < 10; j++) {

 			printf("k[%d] : k[%d]\n", j, f[i]);

 		}


 	}



	
}