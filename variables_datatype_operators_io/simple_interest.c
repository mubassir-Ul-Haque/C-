#include<stdio.h>

int main() {

    float p, r, t, si;

    printf("Enter Value Of P :\n");
    scanf("%f", &p);

    printf("Enter Value Of R :\n");
    scanf("%f", &r);

    printf("Enter Value Of T :\n");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    printf("Your Simple Interest Is: %f\n", si);

    return 0;
}
