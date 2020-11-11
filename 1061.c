#include <stdio.h>
 
int main() {
 
    int d1, d2, h1, h2, m1, m2, s1, s2, segTotal1, segTotal2, tempoTotal;
    char tanto[10], faz[10];
    
    scanf("%s %d", tanto, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", faz,  &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    segTotal1 = s1 + (m1 * 60) + (h1 * 3600) + (d1 * 86400);
    segTotal2 = s2 + (m2 * 60) + (h2 * 3600) + (d2 * 86400);

    tempoTotal = segTotal2 - segTotal1;

   printf("%d dia(s)\n", tempoTotal / 86400);
   tempoTotal = tempoTotal % 86400;
   printf("%d hora(s)\n", tempoTotal / 3600);
   tempoTotal = tempoTotal % 3600;
   printf("%d minuto(s)\n", tempoTotal / 60);
   tempoTotal = tempoTotal % 60;
   printf("%d segundo(s)\n", tempoTotal);


 
    return 0;
}