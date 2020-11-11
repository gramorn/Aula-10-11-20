#include <stdio.h>
#include <string.h>
 
int main() {
 
    char mens[101];
    
    int rep = 0, contador = 0;
    
    scanf("%s", mens);
    
    while (mens[rep]){
        if (mens[rep] == '1') contador++;
        rep++;
    }

    if (contador % 2 == 0) printf("%s0\n", mens);
    else printf("%s1\n", mens);

    
    return 0;
}