#include<stdio.h>
#include<conio.h>
int main()
{
    int s,n;
    printf("Enter Any no:- ");
    scanf("%d",&n);
    s=sum(n);
    printf(" = %d",s);
    getch();
    return 0;
}
int sum(int n)
{
    int i,s=1;
    printf("1!/1");
    for(i=1;i<n;i++)
    {
     printf(" + %d!/%d",i+1,i+1);
     s=s+fact(i);
    }
    return s;
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
     f=f*i;
    return f;
}
