#include <stdio.h>

int cuadradoValor(int a);
void cuadradoReferencia(int* a);
void mostrarInformacion(int variable);
void invertir(int* a, int* b);
void orden(int* a, int* b);

int main(){
    int a, b;
    printf("Ingrese el primer valor\n");
    scanf("%i", &a);

    printf("Ingrese el segundo valor\n");
    scanf("%i", &b);

    mostrarInformacion(a);
    mostrarInformacion(b);

    return 0;
}

int cuadradoValor(int a){
    return a*a;
}

void cuadradoReferencia(int* a){
    *a = (*a) * (*a);
}

void mostrarInformacion(int variable){
    printf("Dirección de memoria de la variable:\t %p", &variable);
    printf("Contenido de la variable:\t %d", variable);   
}

void invertir(int* a, int* b){
    int temporal = *a;
    *a = *b;
    *b = temporal;
}

void orden(int* a, int* b){
    if(b <= a){
        invertir(a, b);
    }    
}