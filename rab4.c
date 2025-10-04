#include <stdio.h>


int main() {
    int dM, dW;
    printf("Enter date: \n");
    printf("enter month: \n");
    scanf("%d", &dM);
    printf("day week: ");
    scanf("%d", &dW);


    if (13 == dM) {
        if (5 == dW) {
            printf("BAD DAY ");
        }
        else {
            if (2 == dW) {
                printf("BAD DAY");
            }

        }
            
    }
        
    if ((17 == dM) && (dW == 5)) {
        printf("BAD DAY");
    }



    return 0;
}