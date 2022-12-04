#include <stdio.h>
 
int main() {
 
    int x, y, i, j, sum;
    while(1){
        sum = 0;
        scanf("%d %d\n", &x, &y);
        if(x<=0 || y<=0){
            break;
        }
        if(x<=y){
            for(i=x; i<=y; i++){
                sum = sum + i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
        }
        if(y<x){
            for(i=y; i<=x; i++){
                sum = sum + i;
                printf("%d ", i);
            }
            printf("Sum=%d\n", sum);
        }
        
    }
 
    return 0;
}
