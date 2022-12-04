#include <stdio.h>
 
int main() {
    
    int n; 
    double media, x, mediaF;
    
    n=0;
    media=0;
    
    while(n<2){
        scanf("%lf\n", &x);
        if(x<0 || x>10){
            printf("nota invalida\n");
        }
        else{
            media = media + x;
            n++;
        }
    }
    mediaF = media/2;
    printf("media = %.2lf\n", mediaF);
 
    return 0;
}
