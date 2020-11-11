#include <stdio.h>
 
int main() {
 
    int x, y, resto = 0;
    
    scanf("%d %d", &x, &y);
    
    if (x < y){
      if (x % 5 == 2 || x % 5 == 3) x++;
        while (x < y){
            if (x % 5 == 2 || x % 5 == 3) printf("%d\n", x);
            x++;
        }
    }else{
      if (y % 5 == 2 || y % 5 == 3) y++;
        while (y < x){
            if (y % 5 == 2 || y % 5 == 3) printf("%d\n", y);
            y++;
        }
    }
 
    return 0;
}