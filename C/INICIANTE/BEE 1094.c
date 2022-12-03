#include <stdio.h>
 
int main() {
 
    int x, i, quant, total, totalc, totalr, totals;
    char animal;
    double pc, pr, ps;
    scanf("%d", &x);
    
    totals = 0;
    totalc = 0;
    totalr = 0;
    total = 0;
    
    for(i=1; i<=x; i++){
        scanf("%d %c\n", &quant, &animal);
        total = total + quant;
        if(animal=='C'){
            totalc = totalc + quant;
        }
        if(animal=='R'){
            totalr = totalr + quant;
        }
        if(animal=='S'){
            totals = totals + quant;
        }
    }
   
    pc = (totalc * 100.0)/(total*1.0);
    pr = (totalr * 100.0)/(total*1.0);
    ps = (totals * 100.0)/(total*1.0);
    
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalc);
    printf("Total de ratos: %d\n", totalr);
    printf("Total de sapos: %d\n", totals);
    printf("Percentual de coelhos: %.2lf %\n", pc);
    printf("Percentual de ratos: %.2lf %\n", pr);
    printf("Percentual de sapos: %.2lf %\n", ps);
    
    
    return 0;
}
