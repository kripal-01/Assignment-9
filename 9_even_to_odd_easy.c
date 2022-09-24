// . Program to Convert even number into its upper nearest odd number
// Switch Statement

#include<stdio.h>
int main()
{ int ch,n;
printf("enter n: ");
       scanf("%d",&n);

switch (n%2)
{
case 0:
printf("%d",n+1);
    /* code */
    break;
    case 1: printf("%d",n);
    


}
    /* code */
    return 0;
}

