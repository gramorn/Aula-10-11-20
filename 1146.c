#include <stdio.h>
 
int main() {
 
    int x, rep, ini;
    
    while(1){
        scanf("%d", &x);
        ini = 0;
        rep = 0;
        while (rep < x){
            rep++;
            ini++;
            if (rep == x){
                printf("%d\n", ini);
            }else {
                printf("%d ", ini);
            }
        }if (x == 0) break;
    }
    return 0;
}