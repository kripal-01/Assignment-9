// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch,a,b;
printf("\nenter 1 for add : ");
	printf("\nenter 2 for sub : ");
	printf("\nenter 3 for multi : ");
	printf("\nenter 4 for div : ");
	printf("\nenter 5 for exit : \n");
	printf("----------------------------\n\n");
	while(1)
	{
			printf("enter two values ");
	scanf("%d %d",&a,&b);
	
	
		printf("\nenter ch :  ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 4 : printf("div is %d",a/b);
			break;
			case 2 : printf("sub is %d",a-b);
			break;
			case 1: printf("add is %d",a+b);
			break;
			case 3: printf("multiplication is %d",a*b);
			break;
			case 5: exit(0);
			default: printf("error");
		}
		printf("\n");
			}
			return 0;
}
