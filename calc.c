# include <stdio.h>
void main()
{
int a,b,c,i,ctr;
ctr=0;
printf ("Enter two numbers");
scanf ("%d,%d",&a,&b);
while (1)
{
ctr++;
printf ("Select a task to perform");
printf ("\n1-Addition\n2-Subtraction\n3-Multiplication\n4-Division\n");
scanf ("%d",&i);
if (ctr!=1&&(i<=4&&i>=1))
{
printf ("enter the second number");
scanf ("%d",&b);
}
switch (i)
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
default :
{
goto end;
break;
}
}
printf ("\nans=%d\n",c);
a=c;
}
end:
printf ("end");
}

