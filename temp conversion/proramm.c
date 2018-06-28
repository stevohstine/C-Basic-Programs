#include<stdio.h>
int main()
{
    float degreec;
    float degreef;
    printf("Enter farenheit\n");
    scanf("%f",&degreef);
    degreec=5.0/9.0*(degreef-32);
    printf("The degree farenhite of %f is equivalent to %f degree celcius", degreef, degreec);
    return 0;
}
