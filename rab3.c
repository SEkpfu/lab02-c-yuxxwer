#include <stdio.h>


int main() {
    printf("enter number: n = ");
    double x;
    scanf("%lf", &x);
    
    double ans = 0; // мог юыть мусор


    if (x > -2) {
        if (x <= 10) {
            ans = x * x + 4 * x + 5;
        }
        else {
            ans = 1 / (x * x + 4 * x - 5);
        }
    }
    printf("the f(x) = %.3f", ans);

    return 0;
}