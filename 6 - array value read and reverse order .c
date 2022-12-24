#include<stdio.h>
void fun(int a[],int n)
{
  int i,j,temp;
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main()
{
    int a[10];
    int i;
    printf("Enter 10 number ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    fun(a,10);
    return 0;


}
