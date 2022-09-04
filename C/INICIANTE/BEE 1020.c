#include <stdio.h>
 
int main() {
 
    int valor;
    scanf("%d", &valor);
    
    int ano = valor/365;
    int resto1 = valor%365;
    int mes = resto1/30;
    int resto2 = resto1%30;
    int dia = resto2;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
    
 
    return 0;
}
