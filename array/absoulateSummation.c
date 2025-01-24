#include<stdio.h>
#include<stdlib.h>


int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0 ;  i< n ; i ++){
        scanf("%d", &a[i]);
    }
    long long  absSum = 0;
    for(int i = 0 ; i < n ; i++){
        absSum += a[i];
    }
    

    printf("%lld", abs(absSum) );



    return 0;
}