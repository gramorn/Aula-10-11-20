#include <stdio.h>
#include <math.h>
 
int main() {
 
    double a, b, c, raiz, result1, result2;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    raiz = (b * b) - 4 * a *  c;
    
    if (raiz >= 0 && a != 0){
        
        result1 = ((b * -1) + sqrt(raiz)) / (2 * a);
        result2 = ((b * -1) - sqrt(raiz)) / (2 * a);
        
        printf("R1 = %0.5lf\n", result1);
        printf("R2 = %0.5lf\n", result2);
        
    }else {
        printf("Impossivel calcular\n");
    }
 
    return 0;
}