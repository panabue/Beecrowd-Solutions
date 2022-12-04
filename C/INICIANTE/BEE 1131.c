#include <stdio.h>
 
int main() {
 
    int x, i, g, grenal, inter, gremio, empate, vencedor;
    
    grenal = 0;
    inter = 0;
    gremio = 0;
    empate = 0;
    
    while(x!=2){
        scanf("%d %d\n", &i, &g);
        grenal++;
        if(i>g){
            inter++;
        }
        if(g>i){
            gremio++;
        }
        if(i==g){
            empate++;
        }
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d\n", &x);
    }
    
    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", empate);
    if(inter>gremio){
        printf("Inter venceu mais\n");
    }
    if(inter<gremio){
        printf("Gremio venceu mais\n");
    }
    if(inter==gremio){
        printf("Nao houve vencedor\n");
    }
 
    return 0;
}
