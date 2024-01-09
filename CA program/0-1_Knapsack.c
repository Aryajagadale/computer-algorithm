
/* 0-1 Knapsack problem */
#include <stdio.h>


int max(int a, int b)
 {
      return (a > b) ? a : b;
  }


int knapSack(int W, int wt[], int val[], int n)
{

    if (n == 0 || W == 0)
        return 0;


    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);


    else
        return max(
            val[n - 1]
                + knapSack(W - wt[n - 1], wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}

// Driver code
int main()
{ int n,a,i,w;
  printf("enter no. of elements");
  scanf("%d",&n);

    int profit[n];
    int weight[n];

     printf("enter capacity of sack\n");
     scanf("%d",&w);

  for(i=0;i<n;i++)
  {
     printf("enter weight profit\n");
     scanf("%d  %d",&weight[i],&profit[i]);

  }

  a=knapSack(w, weight, profit, n);
    printf(" \n profit=%d",a );
    return 0;
}
