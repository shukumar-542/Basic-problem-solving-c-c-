#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i= 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int lowestNumber = arr[1];
    int lowestIndex = 1; 

    for(int i = 1 ; i <= n ; i++){
        if(arr[i] < lowestNumber){
            lowestNumber = arr[i];
            lowestIndex = i;
        }
        // printf("%d ",  arr[i]);
    }
    printf("%d ",lowestNumber);
    printf("%d",lowestIndex);


    return 0;
}