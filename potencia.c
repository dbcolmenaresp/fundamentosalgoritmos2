/*Programa que se encarga de calcular la potencia b de un numero entero a*/

/**Autor: Ing. Danny Colmenares
@dbcolmenaresp*/

//Archivo para usar las funciones de lectura del teclado y mostrar informacion en la pantalla
#include <stdio.h>
#include <math.h>

int main(){				//Funcion principal del programa

	/*Definicion de las variables*/
	int a, b, i;			//Variables para almacenar los valores para calcular la potencia
	float potencia;		//Variable para guardar el resultado del calculo de la potencia
	
	//Presentacion
	printf("Programa realizado para calcular el valor de la potencia de a elevado a b\n");
	printf("Programa realizado con fines educativos\n");
	printf("Programa realizado por Ing. Danny Colmenares\n");
	printf("Contacto twitter @dbcolmenaresp\n");

	/*Condiciones iniciales del programa
	pre: entrada = una expresion que describe todas las posibles entradas del problema.
	pre: entrada = 
	*/

/*1. Objener los datos requeridos para realizar el calculo del valor de a elevado a la potencia b
Se leen los datos correspondientes desde el teclado*/
	printf("\nIntroduzca los valores de la base a y la potencia b\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("\nSe va a calcular el valor de %d elevado a la potencia %d\n", a, b);

/*2. Determinar el valor de b y ejecutar el proceso de acuerdo al valor de esta valiable:*/
/*	Si b = 0 entonces potencia = 1*/
	if (b == 0)
			potencia = a;
	else{
	
			potencia = a;
			i = 1;
			while (i <= fabs(b) - 1){
				potencia *= a;
				i +=1;
			}
			if (b < 0)
				potencia = 1 / potencia;
		}
	
/*3. Mostrar el valor de la varialbe potencia con el resultado del calculo*/	
	printf("el resultado de %d elevado a la potencia de %d es: %f",a, b, potencia);
	/*Condiciones finales del programa
	pos: entrada = vacio y salida = una descripcion de todas las salidas que pueden darse para
	cada entrada.
	pos: entrada = vacio y salida = valor promedio de los datos ingresados como entrada.
	*/

	return 0;
}						//Fin de la funcion principal
