#include <stdio.h>

int main(){
    int* puntero;
    int variable = 20;
    printf("Hola mundo");    	
    printf("Contenido del puntero:\t %d", *puntero);
    printf("Dirección de memoria almacenada por el puntero:\t %p", &(*puntero));
    printf("Dirección de memoria de la variable:\t %p", &variable);
    printf("Dirección de memoria del puntero:\t %p", &puntero);
    printf("Tamaño de memoria de la variable:\t %p", sizeof(variable));
    printf("Contenido del puntero:\t %d", *puntero);

    return 0;
}