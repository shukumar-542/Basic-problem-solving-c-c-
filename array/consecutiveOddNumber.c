#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 1 ; i <= n ;  i++){
        int x = 0;
        int y = 0;
        scanf("%d", &x);
        scanf("%d" , &y);

        if(x > y){
            int temp = x;
            x = y;
            y = temp;
        }

        int sum  = 0;
        for(int j = x+1 ; j < y ; j++ ){
            if(j % 2 !=0){
                sum += j;
            }
        }
        printf("%d \n", sum);
    }

    return 0;
}