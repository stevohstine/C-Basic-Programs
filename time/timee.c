#include<time.h>
#include<stdio.h>
int main()
{
    time_t timer;
    timer=time(NULL);
    printf("The current time is %s.\n", asctime(localtime(&timer)));
    return 0;
}
