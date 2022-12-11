#include <stdio.h>
 
int main() {
 
    int x, i, y;
    scanf("%d", &x);
    
    y = x*4;
    for(i=1; i<=y; i++){
        if(i%4==0){
            printf("PUM\n");
        }
        else{
            printf("%d ", i);
        }
    }
 
    return 0;
}
