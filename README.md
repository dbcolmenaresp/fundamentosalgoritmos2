# fundamentosalgoritmos2
Ejemplo de desarrollo de un algoritmo y su codificacion en lenguaje de programacion C.
Proyecto con fines educativos.

# Diseño de un algoritmo para calcular el valor de a elevado a b.

Se desea desarrollar un programa que calcule la b-esima potencia de a, o el valor de a 
elevado a la potencia b, donde a y b son numeros enteros y el resultado es un numero real.

Cuando se comienza a construir un algoritmo y luego codificarlo en un lenguaje de 
programacion determinado, lo primero que se debe determina es el resultado que se piensa obtener 
con su ejecucion, luego se debe realizar un analisis detallado de los valores que se requiere 
indicarle al algoritmo como valores iniciales para comenzar con el proceso del que consta el mismo.

Se debe acotar los valores para los cuales el algoritmo es valido y para los cuales se puede realizar 
un proceso adecuado y obtener los valores requeridos.
Para comenzar con el analisis del algoritmo necesario para calcular la b-esima potencia del valor de a, 

se debe tomar en consideracion los valores para los cuales el calculo no es aplicable o puede arrojar error 
en el calculo correspondiente. Tal es el caso de los valores correspondientes a asignarle cero a la variable a y 
un valor de -1 a la variable b, lo cual daria como resultado el calculo de 1/0, lo cual dara un valor de error 
de division entre cero. otro aspecto a tomar en consideracion es el maximo y minimo valores que pueden ser almacenados 
en la valiable que contendra el resultado del proceso de calculo de la potencia de a elevado a la b. Es imposible saber 
a priori cual sera el valor resultado del calculo, por ello se presentara como una restriccion de entrada 
pero no puede ser verificado hasta no reslizar el cualculo respectivo.
Teniendo estos aspectos como consideracines, se procede a definir los valores de pre condicion del calculo 
de la siguiente manera:

pre: a y b: valores enteros; a debe ser diferente de cero; el valor de a es igual a cero pero el valor de b debe ser mayor de cero

post: resultado a elevado a la potencia b

Para comenzar con el analisis del problema planteado, procedemosa determinar los posibles casos que se pueden 
presentar en el calculo propuesto, estos son los posibles rangos de valores que puede tomar la potencia b:

si b = 0 entonces a elevado a la potencia b = 1
si b > 0 entonces se multiplica b veces el valor de a por si mismo
si b < 0 entonces se multiplica b veces el valor de a por si mismo y luego se calcula su valor inverso 1 / (a elevado a la potencia b)

Estos son los posibles valores de la potencia b para los cuales se va a calcular el valor de a elevado a la potencia b.

En funcion de que para cualcular el valor de a elevado a la potencia b, se debe realizar un producto de a por si mismo un numero 
de b veces, lo cual se puede traducir en realizar un calculo iterativo que debe ser ejecutado dentro de un bucle repetitivo.
Las caracteristicas del bucle que se debe ejecutar es que se debe inicializar el valor de la potencia al valor de la 
variable a, una vez inicializada esta valiable, se debe proceder a realizar la asignacion del producto de la potencia 
por el valor de la variable a un numero b - 1 veces.

El algoritmo se desarrolla descomponiendo el calculo en los siguientes pasos:

1. Objener los datos requeridos para realizar el calculo del valor de a elevado a la potencia b
Se leen los datos correspondientes desde el teclado
Leer (a, b)

2. Determinar el valor de b y ejecutar el proceso de acuerdo al valor de esta valiable:
	Si b = 0 entonces potencia = 1
	Si b es diferente a 0
		inicializar potencia = a
		repetir desde i = 1 hasta i = (b - 1) potencia = potencia * a
		si b < 0 calcular potencia = 1 / potencia

3. Mostrar el valor de la varialbe potencia con el resultado del calculo
Mostrar potencia

Una vez realizado el algoritmo del calculo del valor de a elevado a la potencia b, procedemos a su codificacion en el 
lenguaje de programacion c

Para poder tener acceso a las funciones de leer valores desde el teclado y mostrar valores en la pantalla, se procede a 
importar la librefia stdio.h
#include <stdio.h>

Para poder tener acceso a las funciones matematicas como valor absoluto y otras, se procede a importar la libreria math
#include <math.h>

1. Obtener los datos requeridos para realizar el calculo del valor de a elevado a la potencia b
Se leen los datos correspondientes desde el teclado

/*Definicion de las variables*/
	int a, b;			//Variables para almacenar los valores para calcular la potencia
	float potencia;		//Variable para guardar el resultado del calculo de la potencia
	printf("\nIntroduzca los valores de la base a y la potencia b\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("\nSe va a calcular el valor de %d elevado a la potencia %d\n", a, b);

2. Determinar el valor de b y ejecutar el proceso de acuerdo al valor de esta valiable:

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

# REFERENCIAS

B. A. Trajtenbrot. Algoritmos y resolucion automatica de problemas. Editorial MIR. Disponible en:
http://www.librosmaravillosos.com/losalgoritmosylaresolucion/index.html

Pere Brunet. Nosotros y los algoritmos. El Mundo. Disponible en:
http://www.elmundo.es/economia/2017/02/27/58b404f846163fc7208b45cd.html

C: lenguaje de programacion. Disponible en:
https://es.wikipedia.org/wiki/C_(lenguaje_de_programaci%C3%B3n)

Aprenda lenguaje ANCI C como si estuviera en primero. Javier Garcia de Jalón de la Fuente y otros. Escuela Superior de Ingenieros Industriales. Universidad de Navarra. Disponible en:
www4.tecnun.es/asignaturas/Informat1/AyudaInf/aprendainf/ansic/leng_c.pdf
