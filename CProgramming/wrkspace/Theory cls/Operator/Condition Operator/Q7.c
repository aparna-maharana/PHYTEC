/* WACP monitor temp of a current day with the reference of 1 week data base. 
Display weather report. */
#include <stdio.h>
int main()
{
    int temp; 
    char day, sunday, monday, tuesday, wednesday, thursday, friday, saturday;
    printf("Enter a day:");
    scanf("%d", &day);
    if(day = sunday)
    {
    temp = 0;
    printf("WR: Freezing weather\n Temerature is:%d\n", temp);
    }
    else if(day = monday)
    {
        temp = 10;
        printf("WR: Very cold weather\n Temerature is:%d\n", temp);
    }
    else if(day = tuesday)
    {
        temp = 20;
        printf("WR: Cold weather\n Temerature is:%d\n", temp);
    }
    else if(day = wednesday)
    {
        temp = 30;
        printf("WR: Normal weather\n Temerature is:%d\n", temp);
    }
    else if(day = thursday)
    {
        temp = 40;
        printf("WR: Hot weather\n Temerature is:%d\n", temp);
    }
    else if(day = friday)
    {
        temp = 50;
        printf("WR: Very Hot weather\n Temerature is:%d\n", temp);
    }
    else if(day = saturday)
    {
        temp = 15;
        printf("WR: Rainy weather\n Temerature is:%d\n", temp);
    }
    
}