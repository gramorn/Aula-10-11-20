#include <stdio.h>
 
int main() {
 
    float i, j, soma;

    for (i = 0.0; i < 2.1; i += 0.2){

      for(j = 1.0; j <= 3.0; j++){

        soma = i + j;

        if((i > 0 && i < 1) || (i > 1 && i < 2)){
          printf("I=%.1f J=%.1f\n", i, soma);
        }else{
          printf("I=%d J=%d\n", (int)i, (int) soma);
        }
        
      }
    }
    return 0;
}