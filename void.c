#include <stdio.h>

void saludo_english(void);
void saludo_spanish(void);



int main() {

	printf("Saludo en Español\n");
	saludo_spanish();
	printf("Saludo en Inglés\n");
	saludo_english(); //Cuando la funcion no devuelve ningun valor no hace falta llamarla en una operacion de asignacion
	return 0;
}


void saludo_english(void) {
 
 	printf("Hello\n");
 	return; //No retorna nada por ser void

}


void saludo_spanish() {

	printf("Hola\n");
	//No es obligatorio escribir return en funciones void
	//la funcion termina cuando encuentra }
}