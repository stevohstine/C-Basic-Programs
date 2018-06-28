#include<stdio.h>
int main()
{
    //variable declaration start
    float pi=3.142;
    float radius;
    float length;
    float width;
    float height;
    float diameter;
    float area;
    float perimeter;
    float surfacearea;
    //variable declaration end

    //area of a circle start
    printf("Program to calculate area of a circle \n");
    printf("Enter the radius \n");
    scanf("%f", &radius);
    area=pi*radius*radius;
    printf("The area of the circle is: %f \n", area);
    //area of a circle end

    printf(" \n");
    printf(" \n");

    //perimeter of a circle start
    printf("Program to calculate perimeter of a circle \n");
    printf("Enter the Diameter \n");
    scanf("%f", &diameter);
    perimeter=pi*diameter;
    printf("The perimeter of the circle is: %f", perimeter);
    //perimeter of a circle end

    printf(" \n");
    printf(" \n");

    //area of a rectangle start
    printf("Program to calculate area of a rectangle \n");
    printf("Enter the length \n");
    scanf("%f", &length);
    printf("Enter the width \n");
    scanf("%f", &width);
    area=length*width;
    printf("The area of the rectangle is: %f", area);
    //area of a rectangle end

    printf(" \n");
    printf(" \n");

    //perimeter of a rectangle start
    printf("Program to calculate perimeter of a rectangle \n");
    printf("Enter the length \n");
    scanf("%f", &length);
    printf("Enter the width \n");
    scanf("%f", &width);
    perimeter=2*(length+width);
    printf("The perimeter of the rectangle is: %f", perimeter);
    //perimeter of a rectangle end

    printf(" \n");
    printf(" \n");

    //surface area of a sphere start
    printf("Program to calculate surface area of a sphere \n");
    printf("Enter the radius \n");
    scanf("%f", &radius);
    surfacearea=4*pi*radius*radius;
    printf("The surface area of the sphere is: %f", surfacearea);
    //surface area of a sphere end

    getch();
    return 0;
}
