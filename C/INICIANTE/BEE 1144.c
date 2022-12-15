#include <stdio.h>
 
int main() {
 
    int x, i, q1, q2, q3, q4;
    scanf("%d", &x);
    
    for(i=1; i<=x; i++){
        q1 = i*i;
        q2 = q1*i;
        q3 = q1 + 1;
        q4 = q2 + 1;
        printf("%d %d %d\n", i, q1, q2);
        printf("%d %d %d\n", i, q3, q4);
    }
    
    return 0;
}
