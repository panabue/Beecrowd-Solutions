#include <stdio.h>
 
int main() {
 
    int x, i, pot;
    scanf("%d", &x);
    
    for(i=1; i<=x; i++){
        if(i%2==0){
            pot = i * i;
            printf("%d^2 = %d\n", i, pot);
        }
    }
 
    return 0;
}
