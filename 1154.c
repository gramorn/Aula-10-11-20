#include <stdio.h>
 
int main() {
 
    double idade, media = 0, rep = 0, mediaFinal = 0;
    
    while (1){
        scanf("%lf", &idade);
        if (idade < 0) {
          break;
        }
        else{
        media += idade;
        rep++;
        }
    }
    
    mediaFinal = media/rep;
    printf("%.2lf\n", mediaFinal);
    
    return 0;
}