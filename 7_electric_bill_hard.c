// 7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

//
//#include<stdio.h>
//int main()
//{ int unit,amount=0,total=0;
//  printf("enter no. of units");
//  scanf("%d",&unit);
//  switch (unit)
//  {
//  case 1 ... 50: amount=unit*0.50;
//   total= (amount+(0.20*amount));
//  printf("Total amount = %f",total);
//    /* code */
//    break;
//  case 51 ... 150: amount=(unit-50)*0.75+25;
//   total= (amount+(0.20*amount));
//  printf("Total amount = %f",total);
//    /* code */
//    break;
//case 151 ... 250: amount=(unit-150)*1.20+100;
// total= (amount+(0.20*amount));
//  printf("Total amount = %f",total);
//    /* code */
//    break;
//  
//  default: amount=(unit-250)*1.50+220;
//   total= (amount+(0.20*amount));
//  printf("Total amount = %f",total);
//    break;
//  }
// 
//    /* code */
//    return 0;
//}
//
//
//or

#include<stdio.h>
int main()
{ float x,total=0,amount=0;
printf("Enter no. of units  ");
scanf("%f",&x);
switch(x<=50)
{
//	int amount=0,total=0;
	case 1: amount=(0.50*x);
	break;
	case 0:
		switch(x<=150)
		{
			case 1: amount=(0.75*(x-50)+25);
			break;
			case 0:
				switch(x<=250)
				{
					case 1:amount=(1.20*(x-150)+100);
					break;
					case 0: amount=(1.50*(x-250)+220);
				
				}break;
				
		}break;
}
total= (amount+0.2*amount);

  printf("Total amount = %f",total);
     return 0;
}
 


