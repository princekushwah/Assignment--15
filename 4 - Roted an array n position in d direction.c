#include<stdio.h>
void fun(int a[],int n,int d)
{
    int i,j,x;
    for(i=0;i<d;i++)
    {
        x=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=x;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
int main()
{
    int a[5],i;
    printf("Enter number ");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    fun(a,5,2);
    return 0;
}
