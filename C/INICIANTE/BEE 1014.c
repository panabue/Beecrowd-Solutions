#include <stdio.h>
 
int main() {
 
    int X;
    double Y;
    scanf("%d", &X);
    scanf("%lf", &Y);
    
    double consumo = X/Y;
    printf("%.3lf km/l\n", consumo);
    
    return 0;
}
