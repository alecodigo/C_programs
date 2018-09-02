//Programa que ejecutara una calculadora


//directivas de preprocesador
#include <stdio.h>
#include <math.h>

int dividirbinarios();
int restabinario();
int sumabinario(int a, int b);
char decimaltobinario(char a);

int main() {

	int option; // Usada para almacenar el numero ingresado por el usuario
	char num;
	int x,y;
	int resultado;
	//Menu
	printf("Calculadora\n");
	printf("Seleccione una opcion ingresando el numero que la precede\n");
	printf(" 1. Sumar Binarios \n 2. Restar Binarios\n 3. Multiplicar Binarios \n 4. Dividir Binarios \n 5. Convertir decimal a binario \n\n");
 	scanf("%d",&option);


 	if(option == 1){
 		printf("Usted ha seleccionado la sumadora de binarios ingresara los datos en formato decimal y el programa le mostrara el resultado en binario\n");
 		printf("Ingrese el primer número en decimal\n");
 		scanf("%d",&x);
 		scanf("%d",&y);
 		resultado = sumabinario(x,y);
 		printf("El resultado de la suma es %d", resultado);


 	} else if(option == 2){
 		printf("Usted ha seleccionado Restar binarios\n");


 	} else if(option == 3){
		printf("Usted ha seleccionado Multiplicar binarios\n");

 	} else if(option == 4){
 		printf("Usted ha seleccionado Dividir binarios\n");

 	} else if(option == 5){
 		printf("Usted a seleccionado convertir de decimal a binario\n");
 		scanf("%c",&num);
 		printf("El numero es: ");
 		printf("\t %c", decimaltobinario(num));

 	} else {
 		printf("Debe Ingresar una opcion valida\n");

 	}

 	return 0;
}

int sumabinario(int a, int b)
{
	int c; //carry
    while (b != 0) {
    //find carry and shift it left
        c = (a & b) << 1;
        printf("c es: %d",c);
        //find the sum
        a=a^b;
        b=c;
      }
    return a; 
}






	// Esta funcion convierte un numero decimal a binario

char decimaltobinario(char numero){
	
	/*
		NOTA LOS OPERADORES BINARIOS SOLO FUNCIONAN CON ENTEROS
		char 1 byte (8 bits)
		int 2 bytes (16 bits)
	*/
	int i = 0;
	static char bin[8];
	//char *ptr;
	//ptr = &bin[0];
	unsigned int contador = 128; 			// 2 (n-1) n = 8 ; 2*2*2*2*2*2*2*2

	for(contador; contador > 0 ; contador >>= 1){
		if (contador & numero){
			//printf("1");			
			bin[i] = 1;
			i++;

		}else {
			bin[i] = 0;
			i++;

		}
	
	}
	
	return bin[8];

	}


/*
    regla para restar numero binarios

    0 - 0 = 0
    0 - 1 = 1 (genera un acarreo negativo)
    1 - 0 = 1
    1 - 1 = 0


*/

/*
    regla para restar numero binarios

    0 + 0 = 0
    0 + 1 = 1
    1 + 0 = 0
    1 + 1 = 1 (genera un acarreo)


*/



