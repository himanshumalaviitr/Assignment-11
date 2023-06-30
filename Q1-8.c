int main()
{
  PASCAL(5);
}
//LCM
int lcm(int a, int b)
{
    int i=2,l=1;

    while(a>b ? i<=a : i<=b)
    {
        if(a%i==0||b%i==0)
        {
            l=l*i;
            if(a%i==0)
                a=a/i;
            if(b%i==0)
                b=b/i;
        }
        else
            i++;
    }
    return l;
}

//HCF
int hcf(int a,int b)
{
    int h=1,i=2;
    while(i<=a)
      if(a%i==0&&b%i==0)
      {
        h=h*i;
        a=a/i;
        b=b/i;
      }
      else
        i++;
    return h;
}

//prime number
int checkprime(int n)
{
    int i;
    for(i=2;n%i;i++);
    if(i==n)
        return 1;
    else
        return 0;
}

//next prime
int nextprime(int n)
{
    int i;
    while(1)
    {
      for(i=2;n%i;i++);
      if(i==n)
        break;
      n++;
    }
    return n;
}

//first N prime number
void Nprime(int x)
{
    int i,j=0,n=2;
    while(j<x)
    {
      for(i=2;n%i;i++);
      if(i==n)
      {
          printf("%d ",n);
          j++;
      }
      n++;
    }
}

//prims b/w two no.
void findprime(int a,int b)
{
    int i;
    if(a>b)
    {
        a=a+b;
        b=a-b;
        a=a-b;
    }
    while(a<b)
    {
        for(i=2; a%i ; i++);
        if(i==a)
            printf("%d ",a);
        a++;
    }
}

//fibbonaci series
void fibbo(int n)
{
    int f1=0,f2=1;
    while(n)
    {
        printf("%d ",f1);
        f2=f2+f1;
        f1=f2-f1;
        n--;
    }
}

//PASCAL Triangle


//" PASCAL TRAINGAL "
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,n,r;
    printf("Enter any no: ");
    scanf("%d",&n);

    for(i=0;i<n+1;i++)
    {
        r=0;
        for(j=0;j<=2*n+1;j++)
        {
         if(j>=n-i&&j<=n+i)
               {
                   if(n%2)
                   {
                       if(i%2==0)
                       {
                         if(j%2!=0)
                         {
                              printf("%d",combi(i,r));
                              r++;
                         }
                         else
                          printf("  ");
                       }
                       else
                       {
                         if(j%2==0)
                         {
                            printf("%d",combi(i,r));
                            r++;
                         }
                         else
                           printf("  ");
                        }
                   }
                   else
                   {
                       if(i%2==0)
                       {
                         if(j%2==0)
                         {
                              printf("%d",combi(i,r));
                              r++;
                         }
                         else
                           printf("  ");
                       }
                       else
                       {
                         if(j%2!=0)
                         {
                            printf("%d",combi(i,r));
                            r++;
                         }
                         else
                            printf("  ");
                       }
                   }
               }
         else
            printf("  ");
        }
        printf("\n");
    }
}


int fact(int n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}

int combi(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}


//"" BEST code for  ""

/*int main()
{
    int i,j,n;
    printf("Enter any no:- ");
    scanf("%d",&n);




    for (i = 0; i <= n; i++)
  {
    for (j = 0; j <= n - i; j++)
      printf("  ");

    for (j = 0; j <= i; j++)
      printf(" %3d", combi(i, j));

    printf("\n");
  }
  return 0;
}*/

















