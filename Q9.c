#include<stdio.h>
#include<conio.h>
int main()
{
    int s,n;
    printf("Enter any no. ");
    scanf("%d",&n);
    s=sqr(n);
    printf("squre is %d",s);
    getch();
    return 0;
}

int sqr(int n)
{
    return n*n;
}
