#include <stdio.h>
 
int main() {
    
    int i, x, y, z;
    x=1;
    y=7;
    z=0;
    
    for(i=1; i<=15; i++){
        if(z==3){
            x = 3;
            y = 7;
        }
        if(z==6){
            x = 5;
            y = 7;
        }
        if(z==9){
            x = 7;
            y = 7;
        }
        if(z==12){
            x = 9;
            y = 7;
        }
        printf("I=%d J=%d\n", x, y);
        y--;
        z++;
    }
    
    return 0;
}
