#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main() {
 
    char letras[16];
    long long int x, y, rep;
    
    while (1){
        scanf("%s", letras);
        if (letras[0] == '0') break;
        
        y = strlen(letras);
        
        x = 1;
        rep = 1;
        
        while (rep <= y){
            x *= rep;
            rep++;
        }
        printf("%lld\n", x);
    }
    
    return 0;
}