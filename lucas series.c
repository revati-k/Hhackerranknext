#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void lucas (int n);
int main()
{
    int n;
    scanf("%d",&n);
    lucas(n);
    return 0;
}
void lucas(int n)
{
    int f1,f2,f3;
    f1=3;
    f2=-1;
    if(n>0)
    {
        for(int i=1;i<=n;i++)
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
            printf("%d ",f3);
        }
    }
    else
    {
        printf("Invalid input");
    }
}

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
