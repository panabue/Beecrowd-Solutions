#include <stdio.h>
 
int main() {
 
    double A, B, C;
    scanf("%lf" "%lf" "%lf", &A, &B, &C);
    
    if(A+B>C && B+C>A && C+A>B){
        double perimetro = A + B + C;
        printf("Perimetro = %.1lf\n", perimetro);
    }
    else{
        double area = ((B+A)*C)/2;
        printf("Area = %.1lf\n", area);
    }
    
    return 0;
}
