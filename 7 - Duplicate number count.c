#include<stdio.h>
int fun(int a[],int n)
{
    int hash[100]={0};
    int i,count=0;
    for(i=0;i<10;i++)
        hash[a[i]]++;
    for(i=0;i<10;i++)
    {
        if(hash[i]==2)
          count++;
    }
    return count;
}
int main()
{
    int a[10],i;
    printf("Enter 10 number ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Your number ");
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
        printf("\n");
    printf("Dublicate number in array %d ",fun(a,10));
}
