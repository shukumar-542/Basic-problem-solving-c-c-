#include <stdio.h>
int a[100000];
int b[100000];
int main()
{

    int length1 = 0;
    int length2 = 0;

    scanf("%d", &length1);

    for (int i = 0; i < length1; i++)
    {
        scanf("%d", &a[i]);
    }
    // Original array
    for (int i = 0; i < length1; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    // copy array
    for (int i = 0; i < length1; i++)
    {
        b[i] = a[i];
    }
// print array
    for(int i = 0 ; i < length1 ; i++ ){
        printf("%d ",b[i]);
    }
    length2 = length1;

    return 0;
}