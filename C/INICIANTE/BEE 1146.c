#include <stdio.h>
 
int main() {
 
    int x, i;
    while(x!=0){
        scanf("%d\n", &x);
        for(i=1; i<=x; i++){
            if(i!=x){
                printf("%d ", i);
            }
            else{
                printf("%d\n", i);
            }
        }
    }
    return 0;
}
