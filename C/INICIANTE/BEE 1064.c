#include <stdio.h>
 
int main() {
    
    int i, n;
    double num, media, soma;
    for(i=0; i<6; i++){
        scanf("%lf", &num);
        if(num>0){
            n++;
            soma=soma+num;
        }
    }
    
    media = soma/n;
    
    printf("%d valores positivos\n", n);
    printf("%.1lf\n", media);
 
    return 0;
}
