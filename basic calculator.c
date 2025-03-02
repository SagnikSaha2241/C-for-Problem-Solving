#include <stdio.h>

int main() {
    char op;
    double num1, num2, result;
    printf("Simple Calculator\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %lf", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %lf", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %lf", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %lf", result);
            } else {
                printf("Error!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
