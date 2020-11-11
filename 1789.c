#include <stdio.h>
 
int main() {
    
    int l, v[500], rep, maior;
    
    while (scanf("%d", &l) != EOF){
    
        for (rep = 0; rep < l; rep++){
            scanf("%d", &v[rep]);
        }

        maior = v[0];

        for (rep = 1; rep < l; rep++){
            if (maior < v[rep]) maior = v[rep];
        }
        
        if (maior < 10) printf("1\n");
        else if (maior >= 10 && maior < 20) printf("2\n");
        else printf("3\n");
    }
    
    return 0;
}