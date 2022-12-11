#include <stdio.h>
 
int main() {
 
    int x, i, q1, q2;
    scanf("%d", &x);
    
    for(i=1; i<=x; i++){
        q1 = i*i;
        q2 = q1*i;
        printf("%d %d %d\n", i, q1, q2);
    }
    
    return 0;
}
