#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C;
    scanf("%lf" "%lf" "%lf", &A, &B, &C);
    
    double delta = (B*B)-4*A*C;
    double raiz = sqrt(delta);
    double R1 = (-B + raiz)/(2*A);
    double R2 = (-B - raiz)/(2*A);
    
    if(A==0 || delta<0){
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
 
    return 0;
}
