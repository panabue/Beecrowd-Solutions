#include <stdio.h>
 
int main() {
    
    int x, i, maior, pos;
    maior = 0;
 
    for(i=1; i<=100; i++){
        scanf("%d\n", &x);
        if(x>maior){
            maior = x;
            pos = i;
        }
    }
    printf("%d\n%d\n", maior, pos);
 
    return 0;
}
