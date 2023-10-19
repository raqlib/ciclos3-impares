#include <stdio.h>

int x=1, contador=0;

int main() {
    printf("Primeiros 10 numeros impares: ");

    while (contador<10) { 
    printf("\n%d ", x);
    x=x+2;
    contador=contador+1;

    } 
   
   
    return 0;
}