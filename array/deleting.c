#include <stdio.h>

int a[100000];
int main()
{
    int length;
    scanf("%d", &length);

    for (int i = 0; i < length; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < length; i++)
    {

        printf("%d ", a[i]);
    }

    int index;


    scanf("%d", &index);

    for (int i = index; i < length - 1; i++)
    {
        /* code */
        a[i] = a[i + 1];
    }
    length--;
    printf("\n");
    for (int i = 0; i < length; i++)
    {
        /* code */
        printf("%d ",a[i]);
    }
    
    

    return 0;
}