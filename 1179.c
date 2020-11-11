#include <stdio.h>
 
int main() {
 
    int x, rep, rep2, repP = 0, repI = 0, par[5], impar[5];
    
    for(rep = 0; rep < 15; rep++){
      
        scanf("%d", &x);
        
        if (x % 2 == 0){

            par[repP] = x;
            repP++;

            if (repP == 5){
              for(rep2 = 0; rep2 < 5; rep2++) printf("par[%d] = %d\n", rep2, par[rep2]);
              repP = 0;
            }         

        }else{

          impar[repI] = x;
          repI++;

           if (repI == 5){
              for(rep2 = 0; rep2 < 5; rep2++) printf("impar[%d] = %d\n", rep2, impar[rep2]);
              repI = 0;
            }  

        }
    }
       for(rep2 = 0; rep2 < repI; rep2++) printf("impar[%d] = %d\n", rep2, impar[rep2]); 

       for(rep2 = 0; rep2 < repP; rep2++) printf("par[%d] = %d\n", rep2, par[rep2]);
    
    return 0;
}