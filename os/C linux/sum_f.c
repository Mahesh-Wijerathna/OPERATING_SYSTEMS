#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 20; i <= 911; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    printf("The sum of multiples of 3 between 20 and 911 is: %d\n", sum);

    return 0;
}