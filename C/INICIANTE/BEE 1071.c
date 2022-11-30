#include <stdio.h>
 
int main() {
 
    int x, z, i, y;
    scanf("%d\n%d", &x, &z);
    
    y = 0;
    
    if(x<z){
        for(i=x+115; i<z; i++){
            if(i%2!=0){
                y = y+i;
            }
        }
    }
    if(z<x){
        for(i=z+1; i<x; i++){
            if(i%2!=0){
                y = y+i;
            }
        }
    }

    printf("%d\n", y);
 
    return 0;
}
