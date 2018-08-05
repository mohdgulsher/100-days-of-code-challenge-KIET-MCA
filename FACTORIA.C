void factorial(int n);
void main()
{
int n;
clrscr();
printf("enter the no for which factorial is calculate\n");
scanf("%d",&n);
factorial(n);
getch();
}
void factorial(int n)
{
int i,result=1;
for(i=n;i>0;i--)
{
result=result*i;
}
printf("factorial of %d",result);
}
