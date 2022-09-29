#include <stdio.h>
#include <math.h>
 
int main() {
 
    int i,f,total;
    scanf("%d %d", &i, &f);
    
    if (i<f){
        total = abs(i-f);
    }
    if (i==f){
        total = 24;
    }
    if (i>f){
        total = (24+f)-i;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n",total);
 
    return 0;
}
