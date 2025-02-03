#include<stdio.h>
int main(){

    int n;
    int  k = 1;
    scanf("%d", &n);
    for(int i = 1  ; i<= n ;  i++, k +=2){
        int space = n - i;
        for(int spa = 1 ; spa <= space ; spa++){
            printf(" ");
        }


        for(int j = 1 ; j <= k ; j++){
            printf("*");
        }
        printf("\n");
    }


    k -= 2;
    for(int i = n ; i >= 1 ; i-- , k -=2){
        int space = n - i;
        while (space--)
        {
            /* code */
            printf(" ");
        }
        
        for(int j = 1 ; j <= k ; j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}


/*



 n = 4;     k n space
   *        1 1 3
  ***       3 2 2  
 *****      5 3 1
*******     7 4 0

*******     7 4
 *****      5 3 
  ***       3 2
   *        1 1





*/