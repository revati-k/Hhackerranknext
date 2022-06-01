#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int i,n,s=0,b=0;
scanf("%d",&n);
    int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for( i=0;i<n;i++)
{
    if(a[i]%2==0)
    {
     s=s+a[i];
    }
    else
    {
       b=b+a[i];
    }
 }
 printf("Sum of even numbers=%d\n",s);
 printf("Sum of odd numbers=%d",b);
 return 0;
}
