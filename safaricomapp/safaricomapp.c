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
    int x=0, y=3;
    int choice;
    int loop=0;
    for(;;)
    {

            printf(" \n");
            printf(" ******************************\n");
            printf(" *                            *\n");
            setxy(x,y);
            printf(" *    Self care:              *\n");
            setxy(x,y+1);
            printf(" *    0: Flex                 *\n");
            setxy(x,y+2);
            printf(" *    1: My Account           *\n");
            setxy(x,y+3);
            printf(" *    2: Buy Data Bundles     *\n");
            setxy(x,y+4);
            printf(" *    3: Products & Services  *\n");
            setxy(x,y+5);
            printf(" *    4: Mpesa                *\n");
            setxy(x,y+6);
            printf(" *    5: My Subscriptions     *\n");
            setxy(x,y+7);
            printf(" *    6: Advantage Plus       *\n");
            setxy(x,y+8);
            printf(" *    7: Stori Ibambe         *\n");
            setxy(x,y+9);
            printf(" *    8: Get your PUK Number  *\n");
            setxy(x,y+10);
            printf(" *    98: MORE                *\n");
            setxy(x,y+11);
            printf(" *                            *\n");
            setxy(x,y+12);
            printf(" *    10: EXIT                *\n");
            setxy(x,y+13);
            printf(" *                            *\n");
            printf(" ******************************\n");

            printf(" Enter your choice:\n");
            scanf("%d",&choice);
            system("cls");
            switch(choice)
            {
            case 0:
                printf("1: Sh999: 1,100 Flex for 30 days\n");
                printf("2: Sh1499: 1,700 Flex for 30 days\n");
                printf("3: Sh2499: 3,500 Flex for 30 days\n");
                printf("4: Daily Flex Bundles\n");
                printf("5: 7 day Flex Bundles\n");
                printf("98:MORE\n");

                printf(" Enter your choice:\n");
                scanf("%d",&choice);

                printf("Get 1,00 Monthly Flex @sh999\n");
                printf("1: Buy Once\n");
                printf("2: Auto-Renew\n");


            case 10:
                printf("Press any key to end program");
                break;
            default:
                printf("Invalid choice!!!!!");
                break;
            }

            if(choice==10)
            {
                break;
            }
    }



    return 0;
}
