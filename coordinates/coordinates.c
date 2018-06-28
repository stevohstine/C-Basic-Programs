#include<windows.h>
#include<stdio.h>
#include<conio.h>
COORD c ={0, 0};
void setxy (int x, int y)
{
    //set x and y coordinates
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
int main()
{
    int x=10, y=10, regno;
    char name [10];

    printf("Enter your name: \n");
    scanf("%s", &name);

    printf("Enter your regno: \n");
    scanf("%d", &regno);

    setxy(x,y);
    printf("Your name is %s ", name);
    setxy(x,y+1); //add one to display regno in the next line
    printf("Your regno is %d", regno);

    return 0;

}
