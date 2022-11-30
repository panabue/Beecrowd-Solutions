#include <stdio.h>
 
int main() {
 
    int n1, n2, n3, n4, n5, x, y, p, n;
    scanf("%d\n%d\n%d\n%d\n%d", &n1, &n2, &n3, &n4, &n5);
    
    x = 0;
    y = 0;
    p = 0;
    n = 0;
    
    if(n1%2==0){
        x++;
    }
    else{
        y++;
    }
     if(n2%2==0){
        x++;
    }
    else{
        y++;
    }
     if(n3%2==0){
        x++;
    }
    else{
        y++;
    }
     if(n4%2==0){
        x++;
    }
    else{
        y++;
    }
     if(n5%2==0){
        x++;
    }
    else{
        y++;
    }

    if(n1>0){
        p++;
    }
    else if(n1!=0){
        n++;
    }
    if(n2>0){
        p++;
    }
    else if(n2!=0){
        n++;
    }
    if(n3>0){
        p++;
    }
    else if(n3!=0){
        n++;
    }
    if(n4>0){
        p++;
    }
    else if(n4!=0){
        n++;
    }
    if(n5>0){
        p++;
    }
    else if(n5!=0){
        n++;
    }

    printf("%d valor(es) par(es)\n", x);
    printf("%d valor(es) impar(es)\n", y);
    printf("%d valor(es) positivo(s)\n", p);
    printf("%d valor(es) negativo(s)\n", n);
 
    return 0;
}
