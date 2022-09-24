
// 6. Program to check whether a year is a leap year or not. Using switch
// statement
#include<stdio.h>
int main()
{ 
int y;
printf("#######################\n\n");
printf("enter year");
scanf("%d",&y);
switch(y%100==0)
{
	//nested switch also posible
	case 1: switch(y%400==0)
	{
		case 1: printf("leap");
		break;
		case 0: printf("Non leap");
		break;
	}
	break;
	case 0: switch(y%4==0)
	{
		case 1: printf("leap");
		break;
		case 0: printf("leap");
		break;
	}
}

       

    /* code */
    return 0;
}
