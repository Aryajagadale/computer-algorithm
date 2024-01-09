#include<stdio.h>
#include<stdlib.h>

typedef struct kns
{ int profit[50];
   int wt[50];
   float ratio ;
}K;
int main()
{

int bag_size,n;
printf("\nEnter maximum size: ");
scanf("%d",&n);
    K k1[n];

for(int i=0;i<n;i++)
{ printf("\nEnter weights :");
  scanf("%d",&k1[i].wt);
  printf("\nEnter profit :");
  scanf("%d",&k1[i].profit);

}
printf("\nEnter bag size: ");
scanf("%d",&bag_size);

for(int i=0;n;i++)
{ (k1[i].ratio[i])=(k1[i].profit[i])*1.00/(k1[i].wt[i])*1.00;
}
printf("\nFraction ratio of profit and weight: ");
for(int i=0;i<n;i++)
{
 printf("%.2f ",k1[i].ratio[i]);
}

 int i, j;
 K temp;
    for (i = 1; i < n; i++)
  {    temp = ratio[i];
        j = i - 1;
     while(j>=0 && temp <= ratio[j])
        {
            ratio[j+1] = ratio[j];
            j = j-1;
        }
        ratio[j+1] = temp;
    }
    printf("\nAfter sorting array elements are - \n");
    for(i=(n-1);i>=0;i--)
    printf("%.2f\t",k1[i]*ratio[i]);

       int  x=n;
       float p=0;
    for(i=0;i<n;i++)
    {

        if(wt[i]<=x & x>0)
        { x= x-wt[i];
          p=p+k1[i].profit[i];
        }
         else
        { p=p+(k1[i].profit[i]*(x/k1[i].wt[i]));
          break;
        }
    }

    printf("\nprofit %f",p);
return 0;
}
