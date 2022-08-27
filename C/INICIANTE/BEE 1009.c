#include <stdio.h>
 
int main() {
 
    char nome[50];
    double salario, vendas;
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    
    double total = salario + (vendas*0.15);
    printf("TOTAL = R$ %.2lf\n", total);
 
    return 0;
}
