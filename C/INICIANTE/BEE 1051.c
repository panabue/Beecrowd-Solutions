#include <stdio.h>
 
int main() {
    
    double renda, resto, resul;
    scanf("%lf", &renda);
    if (renda>=0 && renda<=2000){
        printf("Isento\n");
    }
    if (renda>2000 && renda<=3000){
        resto = renda-2000;
        resul = resto*0.08;
        printf("R$ %.2lf\n", resul);
    }
    if (renda>3000 && renda<=4500){
        resto = renda-3000;
        resul = (resto*0.18)+(1000*0.08);
        printf("R$ %.2lf\n", resul);
    }
    if (renda>4500){
       resto = renda-4500;
       resul = (resto*0.28)+(1500*0.18)+(1000*0.08);
       printf("R$ %.2lf\n", resul);
    }
 
    return 0;
}
