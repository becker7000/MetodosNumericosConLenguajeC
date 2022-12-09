#include<stdio.h>

void llenar(float* salarios, int tam);
void imprimir(float* salarios, int tam);
void ordernarPorBurbuja(float* salarios,int tam);
void intercambiar(float* a, float* b);

int main(){

    float salarios[6]; // Guardamos 6 numeros flotantes
    llenar(salarios,6);
    imprimir(salarios,6);
    printf("\n\t Da click para ordenar los salarios...");
    getch();
    ordernarPorBurbuja(salarios,6);
    imprimir(salarios,6);
    printf("\n\n");
    return 0;
}

void llenar(float* salarios, int tam){
    register int i;
    printf("\n\n\t Llena 6 salarios: \n");
    for(i=0;i<tam;i++){
        printf("\n\t Salario #%d: $",i+1);
        scanf("%f",(salarios+i)); // & significa: dame tu dirección
    }
    getch();
    system("cls");
}

void imprimir(float* salarios,int tam){
    register int i;
    printf("\n\n\t Lista de salarios: ");
    for(i=0;i<tam;i++){
        printf("\n\t Salario #%d: $%.2f",i+1,*(salarios+i)); // * dame tu valor
    }
}

void ordernarPorBurbuja(float* salarios, int tam){
    register int i,j;
    // Variables de control i: comparaciones y j: pasadas
    for(i=(tam-1);i>0;i--){ // Comparaciones
        for(j=0;j<i;j++){
            if(*(salarios+j)>*(salarios+j+1)) 
                intercambiar((salarios+j),(salarios+j+1));
        }
    }
}

void intercambiar(float* a, float* b){
    float auxiliar;
    auxiliar=*a;
    *a=*b;
    *b=auxiliar;
}