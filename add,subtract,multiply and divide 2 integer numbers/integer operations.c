//This program only adds,subtracts, multiply and divide integers ... Whole numbers only
#include<stdio.h>
int main()
{
    //variable declaration start
    int num1;
    int num2;
    int sum;
    int sub;
    int product;
    int division;
    //variable declaration end

    //compute addition start
    printf("Program to Add 2 numbers \n");
    printf("\n");
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    sum=num1+num2;
    printf("The sum is %d \n", sum);
    //compute addition end

    printf("\n");
    printf("\n");
    printf("********************************\n");
    printf("\n");
    printf("\n");

    //compute subtraction start
    printf("Program to subtract 2 numbers \n");
    printf("\n");
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    sub=num1-num2;
    printf("%d-%d is %d", num1, num2, sub);
    //compute subtraction end

    printf("\n");
    printf("\n");
    printf("********************************\n");
    printf("\n");
    printf("\n");

    //multiply start
    printf("Program to multiply 2 numbers \n");
    printf("\n");
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    product=num1*num2;
    printf("%d*%d is %d", num1, num2, product);
    //multiply end

    printf("\n");
    printf("\n");
    printf("********************************\n");
    printf("\n");
    printf("\n");

    //divide start
    printf("Program to Divide 2 numbers \n");
    printf("\n");
    printf("Enter first number:\n");
    scanf("%d", &num1);
    printf("Enter second number:\n");
    scanf("%d", &num2);
    division=num1/num2;
    printf("%d/%d is %d", num1, num2, division);
    //divide end

    getch();
    return 0;
}
