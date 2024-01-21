#include <stdio.h>

float numOne;
float numTwo;
int operation;

int main() {
    double result;

    printf("Enter first number: ");
    scanf("%d", &numOne);

    printf("Enter second number: ");
    scanf("%d", &numTwo);

    printf("Choose an Operation: \n 1) + \n 1) - \n 3) * \n 4) / \n\n I pick operation number: ");
    scanf("%d", &operation);

    switch (operation) {
        case 1:
            result = (double) numOne + numTwo;
            break;
        case 2:
            result = (double) numOne - numTwo;
            break;
        case 3:
            result = (double) numOne * numTwo;
            break;
        case 4:
            if (numTwo == 0) {
                printf("Undefined!");
                return 1;
            }

            result = (double) numOne/numTwo;
            break;
        default: break;
    }

    printf("The result is: %f", result);

    return 0;
}
