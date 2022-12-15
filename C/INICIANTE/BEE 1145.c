#include <stdio.h>
 
int main() {
 
    int x, y, i, cont;
    scanf("%d %d", &x, &y);
    cont = 0;
    
    for(i=1; i<=y; i++){
        cont++;
        if(cont%x==0){
            printf("%d\n", i);
        }
        else{
            printf("%d ", i);
        }
        
    }
 
    return 0;
}
