#include <stdio.h>
 
int main() {
 
    int x, i, y;
    scanf("%d", &x);
    
    for(i=1; i<=x; i++){
        scanf("%d", &y);
        if(y==0){
            printf("NULL\n");
        }
        if(y>0 && y%2==0){
            printf("EVEN POSITIVE\n");
        }
        if(y<0 && y%2==0){
            printf("EVEN NEGATIVE\n");
        }
        if(y<0 && y%2!=0){
            printf("ODD NEGATIVE\n");
        }
        if(y>0 && y%2!=0){
            printf("ODD POSITIVE\n");
        }
    }
    
    return 0;
}
