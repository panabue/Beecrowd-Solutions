#include <stdio.h>
 
int main() {
 
    int numero, horas;
    double valor;
    scanf("%d", &numero);
    scanf("%d", &horas);
    scanf("%lf", &valor);
    
    double salario = valor * horas;
    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}
