#include <stdio.h>
 
int main() {
 
    int c1, c2, p1, p2;
    double v1, v2;
    scanf("%d" "%d" "%lf", &c1, &p1, &v1);
    scanf("%d" "%d" "%lf", &c2, &p2, &v2);
    
    double total = p1*v1 + p2*v2;
    printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}
