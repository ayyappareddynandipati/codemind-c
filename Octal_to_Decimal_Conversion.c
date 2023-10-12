#include <stdio.h>
#include <math.h>

int main() {
    unsigned long long octalNumber;
    int decimalNumber = 0, i = 0;

    scanf("%llu", &octalNumber);

    while (octalNumber != 0) {
        int digit = octalNumber % 10;
        decimalNumber += digit * pow(8, i);
        i++;
        octalNumber /= 10;
    }

    printf("%d
", decimalNumber);

    return 0;
}
