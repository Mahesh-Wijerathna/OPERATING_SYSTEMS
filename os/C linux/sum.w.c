#include <stdio.h>

int main() {
    int sum = 0;
    int i = 20;

    while (i <= 911) {
        if (i % 3 == 0) {
            sum += i;
        }
        i++;
    }

    printf("The sum of multiples of 3 between 20 and 911 is: %d\n", sum);

    return 0;
}