#include <stdio.h>
 
int main() {
 
    double N1, N2, N3, N4;
    scanf("%lf" "%lf" "%lf" "%lf", &N1, &N2, &N3, &N4);
   
    double mediaP = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    printf("Media: %.1lf\n", mediaP);
   
    if(mediaP>=7){
        printf("Aluno aprovado.\n");
    }
   
    else if(mediaP<5){
        printf("Aluno reprovado.\n");
    }
   
    else if(5<=mediaP<=6.9){
        printf("Aluno em exame.\n");
       
        double notaE;
        scanf("%lf", &notaE);
        printf("Nota do exame: %.1lf\n", notaE);
       
       
        double mediaE = (notaE + mediaP)/2;
        if(mediaE >=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mediaE);
        }
        else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mediaE);
        }
       
    }
 
    return 0;
}
