#include<stdio.h>
void fun(int a[],int n)
{
     int hash[100]={0};
    int i;
    for(i=0;i<n;i++)
        hash[a[i]]++;
        printf("Your unique number---> ");
    for(i=0;i<100;i++)
        if(hash[i]==1)
        {
           printf(" %d",i);
        }


}
int main()
{
    int a[10];
    printf("Enter 10 number ");
    for(int i=0;i<10;i++)
        scanf("%d",&a[i]);

     fun(a,10);
     return 0;

}
