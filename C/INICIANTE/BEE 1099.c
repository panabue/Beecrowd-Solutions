#include <stdio.h>
 
int main() {
 
    int z, x, y, i, j, soma;
    scanf("%d", &z);
    
    for(i=1; i<=z; i++){
        scanf("%d %d\n", &x, &y);
        if(x<=y){           
            soma = 0;
            for(j=x+1; j<y; j++){
                if(j%2!=0){
                    soma = soma + j;
                }
            }
            printf("%d\n", soma);
        }
        else{
            soma = 0;
            for(j=y+1; j<x; j++){
                if(j%2!=0){
                    soma = soma + j;
                }
            }
            printf("%d\n", soma);
        }
    }
    
    return 0;
}
