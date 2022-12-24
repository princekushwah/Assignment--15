#include<stdio.h>
int fun(int a[],int n)
{
 int i,max=0;

     for(i=0;i<n;i++)
    {
        if(max<a[i])
          max=a[i];
    }
    return max;
}
int main()
{
    int a[10],i,max;
     printf("Enter 10 number ");
     for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    max=fun(a,10);

    printf("%d",max);
}
