#include <stdio.h>

int main() {
    int a, b, c;
    float f;
    scanf(" %d %d  %d" , &a,  &b, &c);
    scanf("%f", &f);
    printf("a = %d b=%d c=%d float=%.4f", a , b, c , f);
    return 0;
};

/*
    format specifier


    short int %hd
    int %d
    long int %ld
    char %c
    float %f
    double %lf
    long double %lf

    unsigned int %u
    unsigned short %hd

*/