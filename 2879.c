#include <stdio.h>
 
int main() {
 
    int jogos, jogador, porta, contador, rep;
    
    jogador = 1;
    contador = 0;
    
    scanf("%d", &jogos);
    
    for (rep = 0; rep < jogos; rep++){
      scanf("%d", &porta);
      
      if (porta != 1) contador++;
        
    }

    printf("%d\n", contador);
    return 0;
}