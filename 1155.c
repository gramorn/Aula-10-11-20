#include <stdio.h>
 
int main() {
 
    double rep = 1, s = 0, aux;
    
    while (rep <= 100){
        aux = 1/rep;
        s += aux;
        rep++;
    }
    printf("%.2lf\n", s);
 
    return 0;
}