#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0 ; i< n; i++){
        scanf("%d", &a[i]);
    }
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
    }
    printf("%d\n", sum);

    double avg = (double)sum / n;

    printf("%lf\n", avg);


    return 0;
}