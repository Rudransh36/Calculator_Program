#include <stdio.h>

int main()
{
    float num1, num2, result;
    int choice;

    printf("=================================\n");
    printf("      SIMPLE CALCULATOR\n");
    printf("=================================\n");

    printf("Enter First Number: ");
    scanf("%f", &num1);

    printf("Enter Second Number: ");
    scanf("%f", &num2);

    printf("\nChoose Operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            result = num1 + num2;
            printf("\nResult = %.2f\n", result);
            break;

        case 2:
            result = num1 - num2;
            printf("\nResult = %.2f\n", result);
            break;

        case 3:
            result = num1 * num2;
            printf("\nResult = %.2f\n", result);
            break;

        case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("\nResult = %.2f\n", result);
            }
            else
            {
                printf("\nError! Division by zero is not allowed.\n");
            }
            break;

        default:
            printf("\nInvalid Choice!\n");
    }

    printf("\nThank You!\n");

    return 0;
}