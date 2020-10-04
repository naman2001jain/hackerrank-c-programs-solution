#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[1000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        int temp;
       temp=arr[i];
       arr[i]=arr[n-1-i];
       arr[n-1-i]=temp;
    }
    for(i=0;i<n;i++)
    {
       printf("%d ",arr[i]);
    }
    
    return 0;
}

