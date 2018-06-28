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
    int x,y;
    int math,eng,kiswa,science,marks;
    float average;
    char grade;
    int loop=0;
    char exit;

    //variable declaration end
    for(loop=0;loop<=1000;loop++)
    {


    printf("\n ");
    printf("  Enter marks for math\n");
    scanf("%d", &math);
    printf("  Enter marks for english\n");
    scanf("%d", &eng);
    printf("  Enter marks for kiswahili\n");
    scanf("%d", &kiswa);
    printf("  Enter marks for science\n");
    scanf("%d", &science);

    printf("\n ");
    marks=math+eng+kiswa+science;
    average=marks/4;

    //grading start
    if (average>=70)
    {
        grade='A';

        printf("Math     English     Kiswa     Science     Total     Average     Grade\n");
        printf(" %d         %d         %d         %d         %d     %f     %c", math, eng, kiswa, science, marks, average, grade);
        getch();
        system("cls");
    }

    else if (average>=60)
    {
        grade='B';
        printf("Math     English     Kiswa     Science     Total     Average     Grade\n");
        printf(" %d         %d         %d         %d         %d     %f     %c", math, eng, kiswa, science, marks, average, grade);
        getch();
        system("cls");
    }
    else if (average>=50)
    {
        grade='C';
        printf("Math     English     Kiswa     Science     Total     Average     Grade\n");
        printf(" %d         %d         %d         %d         %d     %f     %c", math, eng, kiswa, science, marks, average, grade);
        getch();
        system("cls");
    }
    else if (average>=40)
    {
        grade='D';
        printf("Math     English     Kiswa     Science     Total     Average     Grade\n");
        printf(" %d         %d         %d         %d         %d     %f     %c", math, eng, kiswa, science, marks, average, grade);
        getch();
        system("cls");
    }
    else if (average<40)
    {
        grade='E';
        printf("Math     English     Kiswa     Science     Total     Average     Grade\n");
        printf(" %d         %d         %d         %d         %d     %f     %c", math, eng, kiswa, science, marks, average, grade);
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
