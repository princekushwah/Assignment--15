#include<stdio.h>
void fun(int a[],int n)
{
    int i,j,temp=0;

   for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
}
int main()
{
    int a[10],i;
    printf("Enter 10 number ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

     fun(a,10);

      return 0;

}
