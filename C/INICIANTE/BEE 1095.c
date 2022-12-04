#include <stdio.h>
 
int main() {
    
    int i, x, y;
    
    x=1;
    y=60;
    
    printf("I=%d J=%d\n", x, y);
    for(i=1; i<=12; i++){
        x = x + 3;
        y = y - 5;
        printf("I=%d J=%d\n", x, y);
    }
 
    return 0;
}
