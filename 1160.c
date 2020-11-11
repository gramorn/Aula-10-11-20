#include <stdio.h>
 
int main() {
 
    int t, rep = 0, pa, pb, contador;
    double g1, g2, resultado = 0, resultado2 = 0;
    scanf("%d", &t);
    
    while (rep < t){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        contador = 0;
        while (pa <= pb){
            resultado2 = pb * (g2 / 100);
            pb += resultado2;
            resultado = pa * (g1 / 100);
            pa += resultado;
            contador++;
            if (contador > 100) {
              break;
            }
        }
      if (contador > 100) printf("Mais de 1 seculo.\n");
      else printf("%d anos.\n", contador);
      rep++;
    }
 
    return 0;
}