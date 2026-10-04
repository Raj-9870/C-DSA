#include<stdio.h>
int main() 
{
    int a[100],i,j,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elememts:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("The elements entered is:");
    for(i=0;i<n;i++)
    {
        printf("\t%d",a[i]);
    }
    return 0;
}