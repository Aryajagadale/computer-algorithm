#include<stdio.h>

int min_max(int i,int j,int max,int min)
{ int arr[10],a[10];
        if(i==j)
        {
                max=arr[i];
                min=arr[j];
                printf("Maximum element is: %d",max);
                printf("Minimum element is: %d",min);
        }
        else if(i==j-1)
        {
                if(arr[i]<arr[j])
                {
                        max=a[j];
                        min=a[i];
                        printf("Maximum element is: %d",max);
                        printf("Minimum element is: %d",min);
                }
                else
                {
                        max=a[i];
                        min=a[j];
                        printf("Maximum element is: %d",max);
                        printf("Minimum element is: %d",min);
                }
        }
        else
        {
                int mid;
                mid=(i+j)/2;
                min_max(i,mid,max,min);
        }
}

int main()
{
        int arr[6];
        int i=0,j=5;
        printf("\nEnter 6 elements array: ");
        for(int i=0;i<6;i++)
        {
                scanf("%d",&arr[i]);
        }
     min_max( i, j, max, min);
        return 0;
}
