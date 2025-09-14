#include <stdio.h>
void main()
{
    int arr[100],i,j,min=0,n,temp;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("sortedarray:");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}