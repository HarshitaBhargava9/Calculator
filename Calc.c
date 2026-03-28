#include <stdio.h>
#include <math.h> // Required for mathematical functions like pow, sqrt, sin, cos, log, etc.
#define PI 3.14159265

// Function prototypes for various operations
double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) { return (b != 0) ? a / b : 0; } // Handledivision by zero
double power(double base, double exp) { return pow(base, exp); } 
double square_root(double x) { return sqrt(x); }
double sine(double deg) { return sin(deg * PI / 180); } // Convert degrees to radians
double cosine(double deg) { return cos(deg * PI / 180); } // Convert degrees to radians
double tangent(double deg) { return tan(deg * PI / 180); } // Convert degrees to radians
double natural_log(double x) { return log(x); }
double log_base10(double x) { return log10(x); }
double exponential(double x) { return exp(x); }

int main() {
    int choice;
    double num1, num2, result;

    do {
        printf("\n--- Advanced Calculator Menu ---\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power (x^y)\n");
        printf("6. Square Root\n");
        printf("7. Sine (degrees)\n");
        printf("8. Cosine (degrees)\n");
        printf("9. Tangent (degrees)\n");
        printf("10. Natural Logarithm (ln)\n");
        printf("11. Logarithm Base 10 (log10)\n");
        printf("12. Exponential (e^x)\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: case 2: case 3: case 4: case 5:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (choice == 1) result = add(num1, num2);
                else if (choice == 2) result = subtract(num1, num2);
                else if (choice == 3) result = multiply(num1, num2);
                else if (choice == 4) {
                    if (num2 != 0) result = divide(num1, num2);
                    else { printf("Error: Division by zero.\n"); continue; }
                }
                else result = power(num1, num2);
                printf("Result: %.4lf\n", result);
                break;

            case 6: case 7: case 8: case 9: case 10: case 11: case 12:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (choice == 6) result = square_root(num1);
                else if (choice == 7) result = sine(num1);
                else if (choice == 8) result = cosine(num1);
                else if (choice == 9) result = tangent(num1);
                else if (choice == 10) {
                    if (num1 > 0) result = natural_log(num1);
                    else { printf("Error: Natural logarithm of non-positive number.\n"); continue; }
                }
                else if (choice == 11) {
                    if (num1 > 0) result = log_base10(num1);
                    else { printf("Error: Logarithm base 10 of non-positive number.\n"); continue; }
                }
                else result = exponential(num1);
                printf("Result: %.4lf\n", result);
                break;

            case 0:
                printf("Exiting calculator.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}