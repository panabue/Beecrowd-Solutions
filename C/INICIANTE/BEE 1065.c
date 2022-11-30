#include <stdio.h>
 
int main() {
 
    int n1, n2, n3, n4, n5, x;
    scanf("%d\n%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4, &n5);
    
    x = 0;
    
    if(n1%2==0){
        x++;
    }
     if(n2%2==0){
        x++;
    }
     if(n3%2==0){
        x++;
    }
     if(n4%2==0){
        x++;
    }
     if(n5%2==0){
        x++;
    }

    printf("%d valores pares\n", x);
 
    return 0;
}
