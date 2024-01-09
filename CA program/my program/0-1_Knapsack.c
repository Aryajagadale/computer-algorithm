
#include<iostream>
# include<stdio.h>
using namespace std;

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
  cout<<"enter no. of elements";
  cin>>n;

    int profit[n];
    int weight[n];

     cout<<"enter capacity of sack\n";
     cin>>w;

  for(i=0;i<n;i++)
  {
     cout<<"enter weight profit\n");
     cin>>weight[i]>>profit[i];

  }

  a=knapSack(w, weight, profit, n);
    cout<<" \n profit=%d",a );
    return 0;
}
