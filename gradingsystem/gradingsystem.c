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
    //variable declaration start
    int x=0,y=11;
    int math,eng,kiswa,science,marks;
    float average;
    char grade;
    int loop=0;
    char exit;

    //variable declaration end
    for(loop=0;loop<=1000;loop++)
    {


    printf("\n");
    printf("Enter marks for math\n");
    scanf("%d", &math);
    printf("Enter marks for english\n");
    scanf("%d", &eng);
    printf("Enter marks for kiswahili\n");
    scanf("%d", &kiswa);
    printf("Enter marks for science\n");
    scanf("%d", &science);

    printf("\n ");
    marks=math+eng+kiswa+science;
    average=marks/4;

    //grading start
    if (average>=70)
    {
        grade='A';
        setxy(x,y);
        printf("Math");
        setxy(x,y+1);
        printf("%d", math);

        setxy(x+10,y);
        printf("eng");
        setxy(x+10,y+1);
        printf("%d", eng);

        setxy(x+20,y);
        printf("kiswa");
        setxy(x+20,y+1);
        printf("%d", kiswa);

        setxy(x+30,y);
        printf("science");
        setxy(x+30,y+1);
        printf("%d", science);

        setxy(x+40,y);
        printf("Total");
        setxy(x+40,y+1);
        printf("%d", marks);

        setxy(x+50,y);
        printf("Average");
        setxy(x+50,y+1);
        printf("%f", average);

        setxy(x+65,y);
        printf("eng");
        setxy(x+65,y+1);
        printf("%c", grade);

        getch();
        system("cls");
    }

    else if (average>=60)
    {
        grade='B';
        setxy(x,y);
        printf("Math");
        setxy(x,y+1);
        printf("%d", math);

        setxy(x+10,y);
        printf("eng");
        setxy(x+10,y+1);
        printf("%d", eng);

        setxy(x+20,y);
        printf("kiswa");
        setxy(x+20,y+1);
        printf("%d", kiswa);

        setxy(x+30,y);
        printf("science");
        setxy(x+30,y+1);
        printf("%d", science);

        setxy(x+40,y);
        printf("Total");
        setxy(x+40,y+1);
        printf("%d", marks);

        setxy(x+50,y);
        printf("Average");
        setxy(x+50,y+1);
        printf("%f", average);

        setxy(x+65,y);
        printf("eng");
        setxy(x+65,y+1);
        printf("%c", grade);

        getch();
        system("cls");
    }
    else if (average>=50)
    {
        grade='C';
        setxy(x,y);
        printf("Math");
        setxy(x,y+1);
        printf("%d", math);

        setxy(x+10,y);
        printf("eng");
        setxy(x+10,y+1);
        printf("%d", eng);

        setxy(x+20,y);
        printf("kiswa");
        setxy(x+20,y+1);
        printf("%d", kiswa);

        setxy(x+30,y);
        printf("science");
        setxy(x+30,y+1);
        printf("%d", science);

        setxy(x+40,y);
        printf("Total");
        setxy(x+40,y+1);
        printf("%d", marks);

        setxy(x+50,y);
        printf("Average");
        setxy(x+50,y+1);
        printf("%f", average);

        setxy(x+65,y);
        printf("eng");
        setxy(x+65,y+1);
        printf("%c", grade);

        getch();
        system("cls");
    }
    else if (average>=40)
    {
        grade='D';
        setxy(x,y);
        printf("Math");
        setxy(x,y+1);
        printf("%d", math);

        setxy(x+10,y);
        printf("eng");
        setxy(x+10,y+1);
        printf("%d", eng);

        setxy(x+20,y);
        printf("kiswa");
        setxy(x+20,y+1);
        printf("%d", kiswa);

        setxy(x+30,y);
        printf("science");
        setxy(x+30,y+1);
        printf("%d", science);

        setxy(x+40,y);
        printf("Total");
        setxy(x+40,y+1);
        printf("%d", marks);

        setxy(x+50,y);
        printf("Average");
        setxy(x+50,y+1);
        printf("%f", average);

        setxy(x+65,y);
        printf("eng");
        setxy(x+65,y+1);
        printf("%c", grade);

        getch();
        system("cls");
    }
    else if (average<40)
    {
        grade='E';
        setxy(x,y);
        printf("Math");
        setxy(x,y+1);
        printf("%d", math);

        setxy(x+10,y);
        printf("eng");
        setxy(x+10,y+1);
        printf("%d", eng);

        setxy(x+20,y);
        printf("kiswa");
        setxy(x+20,y+1);
        printf("%d", kiswa);

        setxy(x+30,y);
        printf("science");
        setxy(x+30,y+1);
        printf("%d", science);

        setxy(x+40,y);
        printf("Total");
        setxy(x+40,y+1);
        printf("%d", marks);

        setxy(x+50,y);
        printf("Average");
        setxy(x+50,y+1);
        printf("%f", average);

        setxy(x+65,y);
        printf("eng");
        setxy(x+65,y+1);
        printf("%c", grade);

        getch();
        system("cls");
    }
    else
    {
        printf("Incomplete work!!!!!!!!!!!1");
    }
    //grading end

    printf("\n ");
    }

    return 0;
}
