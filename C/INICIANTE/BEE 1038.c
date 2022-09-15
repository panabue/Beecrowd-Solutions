#include <stdio.h>
 
int main() {
 
    int cod, quant;
    scanf("%d" "%d", &cod, &quant);
    
    double price;
    
    if(cod==1){
        price = 4.00;
    }
    else if(cod==2){
        price = 4.50;
    }
    else if(cod==3){
        price = 5.00;
    }
    else if(cod==4){
        price = 2.00;
    }
    else if(cod==5){
        price = 1.50;
    }
    
    double total = price * quant;
    
    printf("Total: R$ %.2lf\n", total);
 
    return 0;
}
