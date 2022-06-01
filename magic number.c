#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void magic_9(int n);
int main()
{

    int n;
    scanf("%d",&n);
    if(n<9)
    {
        printf("Number should be greater than 9\n");
        exit(0);
    }
    magic_9(n);
    return 0;
}
void magic_9(int n)
{
    int x=n;
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;

    }

    if(sum%9==0)
    {
     printf("%d is magic number for 9",x);
    }
    else
    printf("%d is not a magic number for 9",x);

}
