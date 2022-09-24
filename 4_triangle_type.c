// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    int a, b, c;
    while (1)
    {
    	printf("######################\n\n");
        printf("enter ch");
        //use flesh
        fflush("stdin");
        //otherwise use get char
        scanf("%c", &ch);
          
        switch (ch)
        
         
        {
        case 'a':
        	 printf("enter a,b,c");
            scanf("%d %d %d", &a, &b, &c);
           
            (a == b || a == c || b == c) ? printf("triangle is isosceles\n") : printf("triangle is not isosceles\n");
            break;
        case 'b':

          	 printf("enter a,b,c");
            scanf("%d %d %d", &a, &b, &c);
            ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) ? printf("triangle is right angle\n") : printf("triangle is not right angle\n");
            break;
        case 'c':
        	 printf("enter a,b,c");
            scanf("%d %d %d", &a, &b, &c);
          // a==b==c not allow
            (a == b && b == c) ? printf("triangle is equilateral\n") : printf("triangle is not equilaterals\n");
            break;
        case 'd':
            exit(0);
        break;
        
        }
        /* code */
    }

    /* code */
    return 0;
}
