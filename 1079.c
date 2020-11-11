#include <stdio.h>
 
int main() {
 
    int n, rep;
    float a, b, c, media;
    
    scanf("%d", &n);
    
    for (rep = 0; rep < n; rep++){
        scanf("%f %f %f", &a, &b, &c);
        
        media = ((a * 2) + (b * 3) + (c * 5)) / 10;
        
        printf("%.1f\n", media);
    }
 
    return 0;
}