void count(int n);
void main()
{
int n;
clrscr();
printf("enter the number");
scanf("%d",&n);
count(n);
getch();
}
void count(int n)
{
int count=0;
while(n!=0)
{
n=n/10;
count++;
}
printf("result %d",count);
}
