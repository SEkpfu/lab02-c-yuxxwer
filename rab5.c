#include <stdio.h>


int main() {
    double r, a, b, z, c;

    printf("Enter r a b z and c\n");
    
    printf("r = ");
    scanf("%lf", &r);

    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    printf("z = ");
    scanf("%lf", &z);

    printf("c = ");
    scanf("%lf", &c);


    if (2 * r <= min(a, b) && z <= c) {
        printf("FIT");
    }
    else {
        printf("TOO LARGE");
    }

    return 0;
}