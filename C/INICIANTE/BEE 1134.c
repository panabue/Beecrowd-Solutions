#include <stdio.h>
 
int main() {
 
    int x, alcool, gasolina, diesel;
    
    alcool = 0;
    gasolina = 0;
    diesel = 0;
    
    while(x!=4){
        scanf("%d\n", &x);
        if(x==1){
            alcool++;
        }
        if(x==2){
            gasolina++;
        }
        if(x==3){
            diesel++;
        }
    }
    
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    
    return 0;
}
