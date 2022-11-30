#include <stdio.h>
 
int main() {
 
    int x, i, y;
    scanf("%d", &x);
    
    y = 0; 
     
    for(i=x; y<6; i++){
        if(i%2!=0){
            y++;
            printf("%d\n", i);
        }
    }
 
    return 0;
}
