#include <stdio.h>


int main() {
    printf("enter number: n = ");
    int a;
    scanf("%d", &a);

    if (a > 0) {
        printf("it is bigger than zero\n");
    }
    else {
        if (a == 0) {
            printf("It equals to the zero\n");
        }
        else {
            printf("Less than zero\n");

        }
    }
    
    if (a % 2 == 0) {
        printf("EVEN");
    }
    else {
        printf("ODD");
    }


    return 0;
}