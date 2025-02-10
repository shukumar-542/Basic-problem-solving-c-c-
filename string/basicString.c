#include<stdio.h>
int main(){

    char str[20];

    scanf("%[^\n]s", str);
    printf("%s \n", str);

    char newStr[] = "Bangladesh \t is a \"beautiful\" country";
    puts(newStr);
    // fgets(str , sizeof(str),stdin);

    // fputs(str , stdout);




    return 0;
}