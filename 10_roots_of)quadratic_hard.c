// 10. C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    int d,b,a,c,ch,e,i;
    printf("enter your equation in format   a*x*x+b*x+c  : \n ");
    scanf("%d*x*x+%d*x+%d",&a,&b,&c);
    d=b*b-4*a*c;
    printf("\n d=%d",d);
    printf("\npress 1 if d>0 ");
     printf("\npress 2 if d=0 ");
      printf("\npress 3 if d<0\n ");
       printf("enter ch");
       scanf("%d",&ch);
    switch (ch)
    {
    case 1:printf("two roots are %f and %f",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
        /* code */
        break;
    case 2:printf("two roots are %d,%d",-b/(2*a),-b/(2*a));
        /* code */
        break;
     case 3:printf("two roots are %d %d",(-b+sqrt(abs(d))*i)/(2*a),(-b-sqrt(abs(d))*i)/(2*a));
        /* code */
        break;
    
    default: printf("invalid");
        break;
    }

    /* code */
    return 0;
}
