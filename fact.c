#include<stdio>
void fact(int n);
main()
{
  int n,i;
     printf("\n enter n=");
       scanf("%d",&n);
  fact(n);
}
void fact(int n)
{
       for(i=1;i<=n;i++)
  {
       fact=fact*i;
   }
       printf("\n fact=%d",fact);
   }
