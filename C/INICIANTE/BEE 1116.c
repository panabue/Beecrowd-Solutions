#include <stdio.h>
 
int main() {
 
    int z, x, y, i;
    double divisao;
    scanf("%d", &z);
    
    for(i=1; i<=z; i++){
        scanf("%d %d\n", &x, &y);
        divisao = (x*1.0)/(y*1.0);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
            printf("%.1lf\n", divisao);
        }
    }
 
    return 0;
}
