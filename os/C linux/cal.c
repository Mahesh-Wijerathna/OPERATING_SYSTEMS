#include <stdio.h>

void add(float a, float b, float *result) {
    *result = a + b;
}

void subtract(float a, float b, float *result) {
    *result = a - b;
}

void multiply(float a, float b, float *result) {
    *result = a * b;
}

void divide(float a, float b, float *result) {
    if (b != 0) {
        *result = a / b;
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

int main() {
    char operation;
    float num1, num2, result;

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operation) {
        case '+':
            add(num1, num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case '-':
            subtract(num1, num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case '*':
            multiply(num1, num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case '/':
            divide(num1, num2, &result);
            if (result != 0) {
                printf("Result: %.2f\n", result);
            }
            break;
        default:
            printf("Error: Invalid operation.\n");
            break;
    }

    return 0;
}