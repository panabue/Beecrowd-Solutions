#include <stdio.h>
 
int main() {
    
    int n, y; 
    double media, x, mediaF;
    
    while(y!=2){
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
        while(1){    
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d\n", &y);
            if(y==1 || y==2){
                break;
            }
        }
    }
 
    return 0;
}
