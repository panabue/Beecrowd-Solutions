#include <stdio.h>
 
int main() {
 
    int aux;
    double a,b,c;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if(a<b){
        aux = a;
        a = b;
        b = aux;
    }
    if(b<c){
        aux = b;
        b = c;
        c = aux;
    }
    if(a<b){
        aux = a;
        a = b;
        b = aux;
    }
    
    if(a>=b+c){
        printf("NAO FORMA TRIANGULO\n");
    }
    
    else{
        if(a*a==(b*b)+(c*c)){
            printf("TRIANGULO RETANGULO\n");
        }
        if(a*a>(b*b)+(c*c)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(a*a<(b*b)+(c*c)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b && b==c){
            printf("TRIANGULO EQUILATERO\n");
        }
        if (a==b && b!=c || b==c && c!=a){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    
 
    return 0;
}
