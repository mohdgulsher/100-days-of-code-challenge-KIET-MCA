void rev(int n);
void main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
rev(n);
getch();
}
void rev(int n)
{
int rem,rev=0;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
printf(" rev of %d",rev);
}