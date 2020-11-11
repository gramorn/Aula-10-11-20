#include <stdio.h>
 
int main() {
 
    int x, y, ini = 0, rep = 0;
    
    scanf ("%d %d", &x, &y);

    
    while (1){
        if (ini >= y) break;
        while (rep < y){
          rep++;
          ini++;
            if (rep == x) {
              printf("%d\n", ini);
              rep = 0;
              y -= x;
            }else{
            printf("%d ", ini);
            }
        }
    }
 
    return 0;
}