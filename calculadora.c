//Programa que ejecutara una calculadora


//directivas de preprocesador
#include <stdio.h>
#include <math.h>

int dividirbinarios();
int restabinario();
int sumabinario(int a, int b);
char * decimaltobinario(int numero);






int main() {

	int option; // Usada para almacenar el numero ingresado por el usuario
	int num;
	int x,y;
	int resultado;
	char *pointer;


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
 		scanf("%d",&num); //se ingresa valor a convertir
 		pointer = decimaltobinario(num);

 		//Imprime vector
		for (int j = 0; j < 8; j++ ){
		
			if(j == 0){
				printf("\t\t");
			}
			printf("%d",*pointer++);

			if(j == 7){
				printf("\n");
			}
		}
 	

 	} else {
 		printf("Debe Ingresar una opcion valida\n");

 	}

 	return 0;
}

int sumabinario(int x, int y)
{
	int carry; //acarreo
	//El ciclo se detiene cuando no hay mas acarreo
    while (y != 0) {
        //Encontramos donde existe acarreo con AND y desplazamos y bit el resultado
        carry = (x & y) << 1;
        //sumamos
        x=x^y;
        /*actualizamos el valor de y con el acarreo para encontrar nuevamente donde hay acarreo
        en la siguiente iteracion. */
        y=carry;
      }
    return x; 
}



// Esta funcion convierte un numero decimal a binario

char * decimaltobinario(int numero){
	
	/*
		NOTA LOS OPERADORES BINARIOS SOLO FUNCIONAN CON ENTEROS
		char 1 byte (8 bits)
		int 2 bytes (16 bits)
	*/
	static char bin[8];
	char *ptr;
	ptr = bin;
	unsigned int contador = 128; 			// 2 (n-1) n = 8 ; 2*2*2*2*2*2*2*2


	//scanf("Ingresar un número: %d", &numero);

	for(contador; contador > 0 ; contador >>= 1){
		if (contador & numero){
			//printf("1");			
			*ptr = 1;	//Asigno el valor uno a la direccion de memoria que apunta ptr
			ptr++;   	//incremento el apuntador

		}else {
			*ptr = 0;
			ptr++;

		}
	
	}
	
	return bin; //paso 

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
    1 + 0 = 1
    1 + 1 = 0 (genera un acarreo de 1 el cual se suma a la siguiente etapa)


*/



