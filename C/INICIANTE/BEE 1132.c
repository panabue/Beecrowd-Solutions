#include <stdio.h>
 
int main() {
 
    int x, y, i, soma;
    scanf("%d %d\n", &x, &y);
    
    soma = 0;
    if(x<=y){
        for(i=x; i<=y; i++){
            if(i%13!=0){
                soma = soma + i;
            }
        }
    }
    if(x>y){
        for(i=y; i<=x; i++){
            if(i%13!=0){
                soma = soma + i;
            }
        }
    }

    printf("%d\n", soma);
 
    return 0;
}
