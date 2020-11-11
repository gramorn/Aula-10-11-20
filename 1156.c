#include <stdio.h>
 
int main() {
 
    double s = 0, rep = 1, divisao = 0, divisor = 1; 
    
    while (rep <= 39){
        divisao = rep/divisor;
        s += divisao;
        rep += 2;
        divisor *= 2;
    }
    
    printf("%.2lf\n", s);
 
    return 0;
}