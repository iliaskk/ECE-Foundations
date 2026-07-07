#include <stdio.h>
#include <stdlib.h>

double calculate (double num1,double num2,char op) {

    if (op == '+') {
            return num1 + num2; }

    else if ( op == '-') {
        return num1 - num2; }

    else if ( op == '*') {
         return num1 * num2; }

    else if (op == '/') {
        if (num2 == 0) {
            printf("Calculation not defined\n");
            return 0.0; }
            return num1 / num2; }
}

int main () {
    double num1,num2;
    char op;

    printf ("Choose number A:\n");
    scanf (" %lf",&num1);

    printf ("Choose number B:\n");
    scanf(" %lf",&num2);

    printf("Choose a calculation: \n");
    scanf(" %c",&op);

    printf("Your result is: %f",calculate(num1, num2, op));
    return 0;
}
