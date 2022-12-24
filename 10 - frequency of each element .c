#include<stdio.h>
void fun(int a[],int n)
{
   int i,hash[100]={0};
    for(i=0;i<n;i++)
        hash[a[i]]++;
    for(i=0;i<n;i++)
        if(hash[i]>0)
    printf("%d --- > %d\n",i,hash[i]);
}
int main()
{
    int i,a[10];
    printf("Enter 10 number ");
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);
    fun(a,10);

    return 0;
}
