#include <stdio.h>
 
int main() {
 
    int tipo, rep, gas=0, alc=0, die=0;
    
    while (tipo != 4){
      scanf("%d", &tipo);
      if (tipo == 1) alc++;
      if (tipo == 2) gas++;
      if (tipo == 3) die++;
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gas);
    printf("Diesel: %d\n", die);
 
    return 0;
}