#include <stdio.h>
#include <cmath>
using namespace std;

int main() {
    double x, y, z, a, b;

    printf("Enter x y z a b\n");
    
    printf("x = ");
    scanf("%lf", &x);

    printf("y = ");
    scanf("%lf", &y);


    printf("z = ");
    scanf("%lf", &z);


    printf("a = ");
    scanf("%lf", &a);

    printf("b = ");
    scanf("%lf", &b);

    
    double i, j, k, width, height; // width > height

    i = max(max(x, y), z);
    k = min(min(x, y), z);
    j = x + y + z - i - k;

    width = max(a, b);
    height = min(a, b);

    if (j < width && k < height) {
        printf("FIT");
    }
    else {
        printf("TOO LARGE");
    }
    


    return 0;
}