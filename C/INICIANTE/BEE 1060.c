#include <stdio.h>
 
int main() {
 
    int i, n;
    double num;
    for(i=0; i<6; i++){
        scanf("%lf", &num);
        if(num>0){
            n++;
        }
    }
    
    printf("%d valores positivos\n", n);
    
    return 0;
}
