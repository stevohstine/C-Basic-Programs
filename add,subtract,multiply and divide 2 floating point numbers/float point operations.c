//This program only adds, subtracts, multiply and divide floating point numbers
#include<stdio.h>
int main()
{
    //variable declaration start
    float num1;
    float num2;
    float sum;
    float sub;
    float product;
    float division;
    //variable declaration end

    //compute sum start
    printf("Program to Add 2 numbers \n");
    printf("\n");
    printf("Enter first number:\n");
    scanf("%f", &num1);
    printf("Enter second number:\n");
    scanf("%f", &num2);
    sum=num1+num2;
    printf("The sum is %f \n", sum);
    //compute sum end

    printf("\n");
    printf("\n");
    printf("********************************\n");
    printf("\n");
    printf("\n");

    //subtract start
    printf("Program to subtract 2 numbers \n");
    printf("\n");
    printf("Enter first number:\n");
    scanf("%f", &num1);
    printf("Enter second number:\n");
    scanf("%f", &num2);
    sub=num1-num2;
    printf("%f-%f is %f", num1, num2, sub);
    //subtract end

    printf("\n");
    printf("\n");
    printf("********************************\n");
    printf("\n");
    printf("\n");

    //multiply start
    printf("Program to multiply 2 numbers \n");
    printf("\n");
    printf("Enter first number:\n");
    scanf("%f", &num1);
    printf("Enter second number:\n");
    scanf("%f", &num2);
    product=num1*num2;
    printf("%f*%f is %f", num1, num2, product);
    //multiply end

    printf("\n");
    printf("\n");
    printf("********************************\n");
    printf("\n");
    printf("\n");

    //Division start
    printf("Program to Divide 2 numbers \n");
    printf("\n");
    printf("Enter first number:\n");
    scanf("%f", &num1);
    printf("Enter second number:\n");
    scanf("%f", &num2);
    division=num1/num2;
    printf("%f/%f is %f", num1, num2, division);
    //division end

    getch();
    return 0;
}
