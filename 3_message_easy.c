// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int ch;
    while(1)
    {
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("today is monday");
            break;
        case 2:
            printf("today is tuesday");
            break;
        case 3:
            printf("today is wednesday");
            break;
        case 4:
            printf("today is thursday");
            break;
        case 5:
            printf("today is friday");
            break;
        case 6:
            printf("today is saturday");
            break;
        case 7:
            printf("today is sunday");
            break;
        case 8: exit(0);
        break;
        default:
            printf("invalid");
        }
    }
    /* code */
    return 0;
}
