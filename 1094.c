#include <stdio.h>
#include <string.h>
 
int main() {
 
    int n, rep, quantia, total, totalC, totalR, totalS;
    char tipo;
    float porC, porR, porS;
    
    scanf("%d", &n);

    totalC = 0;
    totalR = 0;
    totalS = 0;
    total = 0;
    
    for (rep = 0; rep < n; rep++){
        
        scanf("%d %c", &quantia, &tipo);

        total += quantia;
        
        if (tipo == 'C'){
            totalC += quantia;
        }else if (tipo == 'R'){
            totalR += quantia;
        }else if (tipo == 'S'){
            totalS += quantia;
        } 
    }
    
    porC = ((float) totalC * 100.0) / total;
    porR = ((float) totalR * 100.0) / total;
    porS = ((float) totalS * 100.0) / total;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2lf %%\n", porC);
    printf("Percentual de ratos: %.2lf %%\n", porR);
    printf("Percentual de sapos: %.2lf %%\n", porS);
    
    return 0;
}