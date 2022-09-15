#include <stdio.h>
#include <math.h>
 
int main() {
 
    double valor;
    scanf("%lf", &valor);
    int dinheiro = (int)valor;
    valor -= dinheiro;
    
    int moedas = (valor *100);

    int n100 = (dinheiro/100);
    int n50 = (dinheiro%100)/50;
    int n20 = ((dinheiro%100)%50)/20;
    int n10 = (((dinheiro%100)%50)%20)/10;
    int n5 = ((((dinheiro%100)%50)%20)%10)/5;
    int n2 = (((((dinheiro%100)%50)%20)%10)%5)/2;
    int m1 = ((((((dinheiro%100)%50)%20)%10)%5)%2)/1;

    int m50 = moedas /50;
    int m25 = (moedas %50)/25;
    int m10 = (((moedas %50)%25)/10);
    int m05 = ((((moedas %50)%25)%10)/5);
    int m01 = ((((moedas %50)%25)%10)%5)/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n100);
    printf("%d nota(s) de R$ 50.00\n",n50);
    printf("%d nota(s) de R$ 20.00\n",n20);
    printf("%d nota(s) de R$ 10.00\n",n10);
    printf("%d nota(s) de R$ 5.00\n",n5);
    printf("%d nota(s) de R$ 2.00\n",n2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m1);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m05);
    printf("%d moeda(s) de R$ 0.01\n", m01);
    
    return 0;

}
