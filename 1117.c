#include <stdio.h>
 
int main() {

    int rep = 0;
    double nota = 0, media = 0;
    
    while (1){
        if (rep == 2){
            break;
        }else{
            scanf("%lf", &nota);
        
            if (nota >= 0.0 && nota <= 10.0){
                media += nota;
                rep++;
            }else{
                printf("nota invalida\n");
            }
            }
        }
    
    printf("media = %.2lf\n", media / 2.0);
 
    return 0;
}