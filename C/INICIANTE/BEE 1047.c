#include <stdio.h>
#include <math.h>
 
int main() {
 
    int h1, m1, h2, m2, horas, minutos;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    
    if (h1==h2 && m1<m2){
        horas = 0;
        minutos = m2-m1;
    }
    if (h1==h2 && m1>m2){
        horas = ((24+h2)-h1) - 1;
        minutos = 60 - (m1-m2);
    }
    if (h1>h2 && m1<m2){
        horas = (24+h2)-h1;
        minutos = m2-m1;
    }
    if (h1>h2 && m1>m2){
        horas = ((24+h2)-h1) - 1;
        minutos = 60 - (m1-m2);
    }
    if (h1<h2 && m1<m2){
        horas = h2-h1;
        minutos = m2-m1;
    }
    if (h1<h2 && m1>m2){
        horas = (h2-h1) - 1;
        minutos = 60 - (m1-m2);
    }
    if (h1==h2 && m1==m2){
        horas = 24;
        minutos = 0;
    }
    
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
 
    return 0;
}
