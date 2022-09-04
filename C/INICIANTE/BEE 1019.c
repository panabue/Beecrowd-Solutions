#include <stdio.h>
 
int main() {
 
   int valor;
   scanf("%d", &valor);
   
   int horas = valor/3600;
   int resto1 = valor%3600;
   int minutos = resto1/60;
   int resto2 = resto1%60;
   int segundos = resto2;
 
   printf("%d:%d:%d\n", horas, minutos, segundos);
   
   return 0;
}
