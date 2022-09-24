// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.
#include<stdio.h>
int main()
{ int ch,n;



printf("enter n");
scanf("%d",&n);
switch (n)
{
case 1:printf("enter n");
       scanf("%d",&n);
printf("%d",-n);
    /* code */
    break;
    case 0: printf("%d",n);
break;
default:printf("invalid");
    break;
}
    /* code */
    return 0;
}

