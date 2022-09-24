// Assignment - 9 A Job Ready Bootcamp in C++, DSA and IOT MySirG
// Switch Case Problems
// 1. Write a program which takes the month number as an input and display
// number of days in that month.
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int ch, yr;
 while(1){
    printf("-------------------------------------------------------\n\n");
    printf("enter ch   ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("31 days\n");
        break;

    case 2:
        printf("enter yr  ");
        scanf("%d",&yr);
        (yr % 100 == 0)?(yr % 400 == 0)?printf("29 days\n"):printf("28 days\n"):(yr % 4 == 0)? printf("29 days\n"): printf("28 days\n");
                break;
        case 3:
            printf("31 days\n");
            break;
        case 4:
            printf("30 days\n");
            break;
        case 5:
            printf("31 days\n");
            break;
        case 6:
            printf("30 days\n");
            break;
        case 7:
            printf("31 days\n");
            break;
        case 8:
            printf("31 days\n");
            break;
        case 9:
            printf("30 days\n");
            break;
        case 10:
            printf("31 days\n");
            break;
        case 11:
            printf("30 days\n");
            break;
        case 12:
            printf("31 day\n");
            break;
         case 13:
               exit(0);
                  
        default:
            printf("not any month");
        }
    }
        return 0;
    }
