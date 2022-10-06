#include <stdio.h>
 
int main() {
    
    int perc;
    double s, ns, reajuste;
    scanf("%lf", &s);
    
    if(0<=s && s<=400){
        ns = s * 1.15;
        reajuste = ns - s;
        perc = 15;
    }
    if(400<s && s<=800){
        ns = s * 1.12;
        reajuste = ns - s;
        perc = 12;
    }
    if(800<s && s<=1200){
        ns = s * 1.10;
        reajuste = ns - s;
        perc = 10;
    }
    if(1200<s && s<=2000){
        ns = s * 1.07;
        reajuste = ns - s;
        perc = 7;
    }
    if(2000<s){
        ns = s * 1.04;
        reajuste = ns - s;
        perc = 4;
    }
    
    printf("Novo salario: %.2lf\n", ns);
    printf("Reajuste ganho: %.2lf\n", reajuste);
    printf("Em percentual: %d %\n", perc);
    
    return 0;
}
