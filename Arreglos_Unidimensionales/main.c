#include <stdio.h>

/**
 * Elaborar un programa que permita leer una serie de números enteros y despues cuente cuantos de ellos son Pares y
 * cuantos de ellos son impares.
 * Al final debe de mostrar el número de elementos pares e impares además de mostrar todos y cada uno de los números
 * pares que se leyeron.
 * @return
 */
int main() {
    int num;
    printf("Cuantos elementos desea Introducir: ");
    scanf("%d", &num);

    // Se declara un arreglo del número de elementos que se introdujo
    int Elementos[num];

    /**
     * Ciclo que permite leer la información del arreglo desde teclado
     */
    for (int i=0; i<num; i++){
        printf("Introduzca el elemento %d: ", (i+1));
        scanf("%d", &Elementos[i]);
    }

    int par = 0, impar =0;
    /**
     * Ciclo que permite contar cuantos elementos son pares y cuantos son impares.
     */
     for (int i=0; i<num; i++){
         if (Elementos[i]%2==0){
             par++;
         } else {
             impar++;
         }
     }

     printf("De los elementos que se introdujeron %d son pares y %d impares\n", par, impar);

     /**
      * Ciclo que permite imprimir cuales de los elementos son pares
      */
      for (int i=0; i<num; i++){
          if (Elementos[i]%2==0){
              printf("%d ", Elementos[i]);
          }
      }
    return 0;
}
