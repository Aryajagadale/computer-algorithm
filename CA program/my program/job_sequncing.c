#include<stdio.h>
#include<stdlib.h>

typedef struct jobs
{ int job;
  int dl;
  int pr;
}J;

void printJobScheduling(J arr[], int n);
int sort (J j1[], int  n)
{ J temp;
 int i, j;
   for(i = 0; i < n; i++)
    {
      for(j = i+1; j < n; j++)
        {
            if(j1[j].pr > j1[i].pr)
            {
                temp = j1[i];
                j1[i] = j1[j];
                j1[j] = temp;
            }
        }
    }

}
int min(int num1, int num2)
{
    return (num1 > num2) ? num2 : num1;
}


void printJobScheduling(J arr[], int n)
{   J j1[n];
    // Sort all jobs according to decreasing order of profit
     sort(j1,n);

    int k, result[n],p=0;
    int i,slot[n];
  int m = min(n, arr[i].dl) - 1;

    for (int i = 0; i < n; i++)
        slot[i] = 0;

    for (int i = 0; i < n; i++)
        { for (k=m; k >= 0; k--)
            {   if (slot[k] == 0)
              {
                result[k] = i; // Add this job to result
                slot[k] = 1; // Make this slot occupied
                break;
             }
            }
        }


    for (int i = 0; i < n; i++)
        if (slot[i])
          {printf("\n%d\t%d\t%d", arr[result[i]].job,arr[i].dl, arr[i].pr);
           p=p+arr[i].pr;
          }
          printf("\nprofit=%d",p);
}

void main()
{ int i,n;
 printf("enter size\n");
 scanf("%d",&n);

  J j1[n];

  for(i=0;i<n;i++)
   {
     printf("\nenter job \n");
     scanf("%d",&j1[i].job);
     printf("enter deadline\n");
     scanf("%d",&j1[i].dl);
       printf("enter profit\n");
       scanf("%d",&j1[i].pr);
   }


   printf("\n\n");
   sort(j1,n);

   printf("\nafter sorting\n");
   for(i=0;i<n;i++)
   { printf("\tjob:%d\t deadline:%d\t profit:%d\n\n  ",j1[i].job,j1[i].dl,j1[i].pr);
   }
  printJobScheduling(j1, n);


}
