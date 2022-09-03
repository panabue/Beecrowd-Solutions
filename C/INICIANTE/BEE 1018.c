#include <stdio.h>
 
int main() {
 
    int valor;
    scanf("%d", &valor);
    
    int n100 = valor/100;
    int resto1 = valor%100;
    int n50 = resto1/50;
    int resto2 = resto1%50;
    int n20 = resto2/20;
    int resto3 = resto2%20;
    int n10 = resto3/10;
    int resto4 = resto3%10;
    int n5 = resto4/5;
    int resto5 = resto4%5;
    int n2 = resto5/2;
    int resto6 = resto5%2;
    int n1 = resto6/1;
    
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    
    return 0;

}
