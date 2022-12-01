#include <stdio.h>
 
int main() {
 
    int x, i, y, in, out;
    scanf("%d\n", &x);
    
    in = 0;
    out = 0;
    
    for(i=1; i<=x; i++){
        scanf("%d\n", &y);
        if(y>=10 && y<=20){
            in++;
        }
        else{
            out++;
        }
    }
    
    printf("%d in\n", in);
    printf("%d out\n", out);
 
    return 0;
}
