#include <stdio.h>
 
int main() {
 
    int x, y, i;
    while(1){
        scanf("%d %d\n", &x, &y);
        if(x==y){
            break;
        }
        if(x<y){  
            printf("Crescente\n");
        }
        if(y<x){
            printf("Decrescente\n");
        }
        
    }
 
    return 0;
}
