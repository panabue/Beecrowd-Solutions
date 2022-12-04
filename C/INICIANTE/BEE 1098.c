#include <stdio.h>
 
int main() {
    
    double i, x, y, z, h, k, t;
    x=0;
    y=1;
    z=0;
    h=0;
    k=0;
    t=0;
    
    for(i=1; i<=26; i++){
        while(z<3){
            printf("I=%.0lf J=%.0lf\n", x, y);
            y++;
            z++;
        }
        while(z>=15 && z<18){
            x = 1;
            y = 2 + h;
            printf("I=%.0lf J=%.0lf\n", x, y);
            h++;
            z++;
        }
        while(z>=30 && z<33){
            x = 2;
            y = 3 + k;
            printf("I=%.0lf J=%.0lf\n", x, y);
            k++;
            z++;
            t++;
        }
        
        if(z==3){
          x = 0.2;
          y = 1.2;
        }
        if(z==6){
          x = 0.4;
          y = 1.4;
        }
        if(z==9){
          x = 0.6;
          y = 1.6;
        }
        if(z==12){
          x = 0.8;
          y = 1.8;
        }
        if(z==18){
          x = 1.2;
          y = 2.2;
        }
        if(z==21){
          x = 1.4;
          y = 2.4;
        }
        if(z==24){
          x = 1.6;
          y = 2.6;
        }
        if(z==27){
          x = 1.8;
          y = 2.8;
        }
        
        if(t!=3){
            printf("I=%.1lf J=%.1lf\n", x, y);
        }
        
        y++;
        z++;
        
    }
    
    return 0;
}
