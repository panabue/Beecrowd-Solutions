#include <stdio.h>
 
int main() {
    
    int inicio, fim, hi, mi, si, hf, mf, sf, inicio_segundos, fim_segundos, sub;
    int total_dias, resto1, total_horas, resto2, total_minutos, total_segundos;
    
    scanf("Dia %d\n%d : %d : %d\n", &inicio, &hi, &mi, &si);
    scanf("Dia %d\n%d : %d : %d", &fim, &hf, &mf, &sf);
    
    inicio_segundos = (inicio*86400)+(hi*3600)+(mi*60)+si;
    fim_segundos = (fim*86400)+(hf*3600)+(mf*60)+sf;
    sub = fim_segundos - inicio_segundos;
    
    total_dias = sub/86400;
    resto1 = sub%86400;
    total_horas = resto1/3600;
    resto2 = resto1%3600;
    total_minutos = resto2/60;
    total_segundos = resto2%60;
    
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",total_dias, total_horas, total_minutos, total_segundos);
 
    return 0;
}
