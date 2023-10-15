#include <stdio.h>

int main()
{
    char operator;
    printf("chose an operator['+','-','/','*']: ");
    scanf("%c", &operator);

    double num1, num2;
    printf("Enter your first number: \n");
    scanf("%lf", &num1);
    printf("Enter your second number: \n");
    scanf("%lf", &num2);
    double result;
    switch(operator){
    case '+':
    result = num1 + num2;
    printf("%.2lf",result);
    break;
    case '-':
    result = num1 - num2;
    printf("%.2lf",result);
    break;
    case '/':
    result = num1 / num2;
    printf("%lf.2",result);
    break;
    case '*':
    result = num1 * num2;
    printf("%lf.2",result);
    break;
    }
    return 0;
}
