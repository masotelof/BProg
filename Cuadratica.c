#include <stdio.h>
#include <math.h>

/**
 * Programa que permite resolver una ecuación cuadratica de la forma AX^2+BX+C=0
 **/
int main(){
	// Declaramos las variables donde vamos a poner los valores de A, B y C
	float A, B, C;
	
	// Leemos los valores para cada una de las variables
	printf("Introduzca el valor de A: ");
	scanf("%f", &A);
	printf("Introduzca el valor de B: ");
	scanf("%f", &B);
	printf("Introduzca el valor de C: ");
	scanf("%f", &C);
	
	// Declaramos las variables donde vamos a realizar los calculos, X1 y X2
	// para tener -B necesitamos multiplicar B por -1, -1*B
	// tanto sqrt y pow regresan un valor de tipo double por lo que es necesario
	// convertirlo a float usando el cast (float)
	float x1 = (float) (-1*B + sqrt(pow(B,2)-4*A*C))/(2*A);
	float x2 = (float) (-1*B - sqrt(pow(B,2)-4*A*C))/(2*A);
	
	// Imprimimos el resultado
	printf("El resultado es:\n X1 = %.2f\n X2 = %.2f\n", x1, x2);
	return 0;
}