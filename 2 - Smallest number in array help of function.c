#include<stdio.h>
int fun(int a[],int n)
{
    int i,min;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
int main()
{
    int a[5],i,min;
    printf("Enter a numbner ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
     min = fun(a,5);
     printf("%d ",min);
}
