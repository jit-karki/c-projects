#include <stdio.h>

int main() {
    
    int a, b, c, d, e;

    printf("-----Calculator-----\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &c);

    if (c < 1 || c > 4) {
        printf("Invalid choice. Please select a number between 1 and 4.\n");
        return 1;
    }
 
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (c == 1) printf("Result: %d\n", a + b);
    else if (c == 2) printf("Result: %d\n", a - b);
    else if (c == 3) printf("Result: %d\n", a * b);
    else if (c == 4) {
        if (b == 0) printf("Cannot divide by zero\n");
        else printf("Result: %.2f\n", (float)a / b);
    }
    return 0;
}