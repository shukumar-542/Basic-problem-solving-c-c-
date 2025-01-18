#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    /* Smallest number*/
    if (a <= b)
    {
        if (a <= c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        if (b <= c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    };
    printf(" ");
    /* Getter number*/
    if(a >= b && a>= c){
        printf("%d", a);
    }else if(b >= a && b >= c){
        printf("%d", b);
    }else{
        printf("%d",c);
    }

    return 0;
}