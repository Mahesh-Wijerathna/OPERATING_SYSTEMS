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

    printf("Enter the operation (A,S,M,D): ");
    scanf(" %c", &operation);
    if(operation != 'A' || operation != 'S' || operation != 'M' || operation != 'D' || operation != 'a' || operation != 's' || operation != 'm' || operation != 'd')
    {
        printf("Error: Invalid operation.\n");
        return 0;
    }
    if(operation == 'a')
        operation = 'A';
    if(operation == 's')
        operation = 'S';
    if(operation == 'm')
        operation = 'M';
    if(operation == 'd')
        operation = 'D';



    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    switch (operation) {
        case 'A':
            add(num1, num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case 'S':
            subtract(num1, num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case 'M':
            multiply(num1, num2, &result);
            printf("Result: %.2f\n", result);
            break;
        case 'D':
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