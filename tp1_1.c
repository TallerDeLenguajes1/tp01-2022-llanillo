#include <stdio.h>

int main(){
    int* puntero;
    int variable = 20;
    printf("Hola mundo");    	
    printf("Contenido del puntero:\t %i", *puntero);
    printf("Dirección de memoria almacenada por el puntero:\t %i", &(*puntero));
    printf("Dirección de memoria de la variable:\t %i", &variable);
    printf("Dirección de memoria del puntero:\t %i", &puntero);
    printf("Tamaño de memoria de la variable:\t %i", sizeof(variable));
    printf("Contenido del puntero:\t %i", *puntero);

    return 0;
}