#include <stdio.h>
 
int main() {
 
    int x, i, y;
    scanf("%d", &x);
    
    for(i=1; i<=10; i++){
        y = i * x;
        printf("%d x %d = %d\n", i, x, y);
    }
 
    return 0;
}
