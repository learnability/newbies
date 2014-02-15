# include <stdio.h>
#include<math.h>
void main()
{
	float a,b,c;
	int i;
	printf ("Enter first number\n");	/*5-6 Inputing a number from user*/
	scanf ("%f",&a);
	while (1)
	{
printf ("Select a task to perform");	/*9-11 Giving the user a choice of options*/
printf ("\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\nAny other number to exit\n");
scanf ("%d",&i);
if (i<=7&&i>=1)	/*12-14 if user selects an appropriate choice he is asked for another number*/
{
printf ("enter the second number\n");
scanf ("%f",&b);
}
switch (i)		/*17-43 performing task chosen by user*/
{
case 1 :
{
c=a+b;
break;
}
case 2 :
{
c=a-b;
break;
}
case 3:
{
c= a*b;
break;
}
case 4:
{
c= a/b;
break;
}
case 5:	c=(int)a%(int)b;
	break;
case 6:	c=log(a)/log(b);
	break;
case 7:	c=pow(a,b);
	break;
default :
{
goto end;
break;
}
}
printf ("\nans=%f\n",c); /*printing the answer*/
a=c;	/*Assigning answer to the first number and the whole process is repeated*/
}
end:
printf ("\n");
}

