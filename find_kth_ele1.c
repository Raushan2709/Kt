//using selection alogrithm.
#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int main()
{
    int k;
    printf("enter the kth element:");
    scanf("%d",&k);
    int n;
    printf("enter the no of elements :\n");
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++)
    scanf("%d",&ar[i]);
    for(int i=0;i<n;i++)
    printf("%d",ar[i]);
    for(int i=0;i<k-1;i++)
    {
        int minidx=-1;
        int min=INT_MAX;
        for(int j=i;j<k-1;j++)
        {
            if(min>ar[j]){
            min=ar[j];
            minidx=j;
            } 
        }
        int temp=ar[minidx];
        ar[minidx]=ar[i];
        ar[i]=temp;
    }
    printf("\n%d is the %dth element",ar[k-1],k);
    return 0;
}