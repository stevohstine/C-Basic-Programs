#include<stdio.h>
int main()
{
    float miles=183.67;
    int speed=58;
    float time;
    float timeinmin;
    time=miles/speed;
    timeinmin=time*60;
    printf("Time for the trip was %f ", timeinmin);
    getch();
    return 0;
}
