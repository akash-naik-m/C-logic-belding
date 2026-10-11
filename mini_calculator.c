#include <stdio.h>

int main() {
    int choice;
    int a, b, result;

    printf("--- Mini Calculator ---\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (choice == 1) {
        result = a + b;
        printf("Sum = %d\n", result);
    } 
    else if (choice == 2) {
        result = a - b;
        printf("Difference = %d\n", result);
    } 
    else if (choice == 3) {
        result = a * b;
        printf("Product = %d\n", result);
    } 
    else if (choice == 4) {
        result = a / b;
        printf("Quotient = %d\n", result);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
