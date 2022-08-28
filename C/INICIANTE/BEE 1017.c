#include <stdio.h>
 
int main() {
 
    int horas, vm;
    scanf("%d", &horas);
    scanf("%d", &vm);
    
    double km = vm * horas;
    double litros = km/12;
    printf("%.3lf\n", litros);
 
    return 0;
}
