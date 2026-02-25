#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n==============================\n");
        printf("   ADVANCED C CALCULATOR v1.0\n");
        printf("==============================\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root (sqrt)\n");
        printf("7. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Exiting system... Goodbye!\n");
            break;
        }

        if (choice >= 1 && choice <= 5) {
            printf("Enter first number: ");
            scanf("%lf", &num1);
            printf("Enter second number: ");
            scanf("%lf", &num2);
        } else if (choice == 6) {
            printf("Enter number: ");
            scanf("%lf", &num1);
        }

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is undefined!\n");
                }
                break;
            case 5:
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Cannot calculate square root of a negative number!\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
