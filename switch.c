#include <stdio.h>

int main() {
    int x, y, result;
    int choice;

    printf("Enter first integer: ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Enter second integer: ");
    if (scanf("%d", &y) != 1) {
        printf("Invalid input. Please enter an integer.\n");
        return 1;
    }

    printf("Select one operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. End program\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = x + y;
            printf("Sum is %d\n", result);
            break;
        case 2:
            result = x - y;
            printf("Difference is %d\n", result);
            break;
        case 3:
            result = x * y;
            printf("Product is %d\n", result);
            break;
        case 4:
            if (y == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                result = x / y;
                printf("Quotient is %d\n", result);
            }
            break;
        case 5:
            printf("Bye bye\n");
            return 0;
        default:
            printf("Invalid choice. Please select a valid operation.\n");
            break;
    }

    return 0;
}