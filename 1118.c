#include <stdio.h>
 
int main() {

    int rep = 0, novo = 0;
    double nota = 0, media = 0;
    
      while (1){
          if (rep == 2){
              break;
          }else{
              scanf("%lf", &nota);
              
              if (nota >= 0.0 && nota <= 10.0){
                  media += nota;
                  rep++;
              }else {
                  printf("nota invalida\n");
              }
          }
      }

      printf("media = %.2lf\n", media/2.0);

      do{
        printf("novo calculo (1-sim 2-nao)\n");
      
        scanf("%d", &novo);
      
        if (novo == 1) main();
        if (novo == 2) break;
      }while (novo < 1 || novo > 2);
    return 0;
}