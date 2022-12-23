#include<stdio.h>
#include<math.h>

float f(float x);
float filtro();

int main(){

    // Pedir el límite inferior a y el superior b
    float a,b,n,area=0,dx,x;

    printf("\n\t Escribe el limite inferior: ");
    scanf("%f",&a);
    printf("\n\t Escribe el limite superior: ");
    scanf("%f",&b);
   
    n=filtro();

    // Calculamos incremento en x:
    dx=(b-a)/n; // -6 a 6

    int aux=0;
    for(x=a;x<=b;x+=dx){
        if(x==a || x==b){
            area+=f(x);
        }
        if(aux%2==1 && x!=a && x!=b){ // Impares
            area+=(4*f(x));
        }
        if(aux%2==1 && x!=a && x!=b){ // Pares
            area+=(2*f(x));
        }
        aux++;
    }

    area=(dx/3)*area;

    printf("\n\t El area de la funcion f(x) = 36 - x^2");
    printf("\n\t desde %.2f hasta %.2f es: %f",a,b,area);
    printf("\n\t Esta area fue calculada con incrementos de: %.3f",dx);

    printf("\n\n");
    return 0;
}

float f(float x){
    return 36-pow(x,2) ;
}

float filtro(){

    float n;
    printf("\n\t Escribe el valor de n: ");
    scanf("%f",&n);

    if(((int)n)%2==1 || n<5 ){ // Fue impar o menor a 5
        printf("\n\t El valor de n debe ser par mayor a 5.");
        printf("\n\t Da [ENTER] para volver a intentar.");
        getch();
        return filtro();
    }else{
        return n;
    }


}