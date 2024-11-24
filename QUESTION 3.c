#include<stdio.h>
int main(){
    float number1,number2;
    char operation;
     printf("Enter number 1: ");
     scanf("%f",&number1);
     printf("enter number2:");
     scanf("%f",&number2);
     printf("Enter an operation (+, -, *, /): ");
     scanf(" %c", &operation);

    switch(operation) {

        case '+':

            printf("%.2f + %.2f = %.2f\n", number1, number2, number1 + number2);

            break;

        case '-':

            printf("%.2f - %.2f = %.2f\n", number1, number2, number1 - number2);

            break;

        case '*':

            printf("%.2f * %.2f = %.2f\n", number1, number2, number1 * number2);

            break;

        case '/':

            if(number2 != 0.0) {

                printf("%.2f / %.2f = %.2f\n", number1, number2, number1 / number2);

            } else {

                printf("Division by zero is not allowed.\n");

            }

            break;

        default:

            printf("Invalid operation.\n");

    }

    return 0;

}

    








    




