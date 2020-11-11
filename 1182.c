#include <stdio.h>
 
int main() {
 
    int c, rep, rep2;
    char t;
    double m[12][12], soma = 0, media = 0;
    
    scanf("%d %c", &c, &t);
    
    for(rep = 0; rep < 12; rep++){
        for (rep2 = 0; rep2 < 12; rep2++){
            scanf("%lf", &m[rep][rep2]);
        }
    }
    
    for (rep = 0; rep < 12; rep++){
        soma += m[rep][c];
    }
    
    if (t == 'M'){
        media = soma / 12;
        printf("%.1lf\n", media);
    }else printf("%.1lf\n", soma);
    
    return 0;
}