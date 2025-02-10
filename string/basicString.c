#include<stdio.h>
int main(){

    char str[20];

    scanf("%[^\n]s", str);
    printf("%s", str);
    // fgets(str , sizeof(str),stdin);

    // fputs(str , stdout);




    return 0;
}