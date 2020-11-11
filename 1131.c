#include <stdio.h>
 
int main() {
 
    int inter, gremio, interT=0, gremioT=0, empate=0, rep=0, novo;
    
    while (1){
        scanf("%d %d", &inter, &gremio);

        if (inter > gremio) interT++;
        else if (gremio > inter) gremioT++;
        else empate++;
        rep++;
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &novo);
      
        if(novo == 2) break;
    }
    
    printf("%d grenais\n", rep);
    printf("Inter:%d\n", interT);
    printf("Gremio:%d\n", gremioT);
    printf("Empates:%d\n", empate);
    if(interT > gremioT) printf("Inter venceu mais\n");
    if(interT < gremioT) printf("Gremio venceu mais\n");
    if(interT == gremioT) printf("Nao houve vencedor\n");
    
    return 0;
}