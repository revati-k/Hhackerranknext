//4)	In a class there are 10 students. Course teacher of “DS with Applications ” wants to calculate the class average and also count total number of students who scored above and below class average.
//Most of the students IQ is very high. Help course teacher to solve the above problem.

#include<stdio.h>

typedef struct student
{
    int id, marks;
}s;

void read(s a[10], int n)
{
    printf("Enter student id and marks : \n");
    for(int i=0; i<n; i++)
        scanf("%d %d", &a[i].id, &a[i].marks);
}

void compute(s a[10], int n)
{
    int above_avg = 0, below_avg = 0, sum = 0;
    float avg;
    for(int i=0; i<n; i++)
        sum = sum + a[i].marks;
    avg = (float)sum/n;
    for(int i=0; i<n; i++)
    {
        if(a[i].marks<avg)
            below_avg++;
        else
            above_avg++;
    }
    printf("Class Average = %f\nNo. of students above class avg = %d\nNo. of students below class avg = %d",avg,above_avg,below_avg);
}

void main()
{
    s a[10];
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    read(a,n);
    compute(a,n);
}
