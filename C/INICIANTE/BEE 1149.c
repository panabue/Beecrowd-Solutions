#include <stdio.h>
 
int main() {
 
    int a, n, soma, i;
    soma = 0;
    scanf("%d %d", &a, &n);
    
    while(n<=0){
        scanf("%d", &n);
    }
    
    for(i=0; i<n; i++){
        soma = soma + a + i;
    }
    
    printf("%d\n", soma);
    
    return 0;
}
