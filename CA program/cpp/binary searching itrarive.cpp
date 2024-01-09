
#include<iostream>
# include<stdio.h>
using namespace std;
void insert(int a[],int n)
{ int   i, j, temp;

    for (i = 1; i < n; i++)
    {   temp = a[i];
        j = i - 1;

        while(j>=0 && temp <= a[j])
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = temp;
    }
    printf("\nAfter sorting a elements are - \n");
     for(i=0;i<n;i++)
    printf("%d\n",a[i]);
}
int main()
{
  int i, first, last, middle, n, search, a[10];

  int l, r, p, key,f=0;
        l = 0;

    cout<<"enter size of array=";
    cin>>r;

 int ar[r];
    cout<<"enter the element=";
    for(i=0;i<r;i++)
    { cin>>ar[i];
    }

   cout<<"enter element to search=";
   cin>>key;
first = 0;
      last = n - 1;
      middle = (first+last)/2;

  while (first <= last)
    {
    if (a[middle] < search)
     {first = middle + 1;
  cout<<" found at location\n"<< middle;
  break;
     }

    else if (a[middle] == search) {
      cout<<" found at location \n"<< middle+1;
      break;
    }
    else{
      last = middle - 1;
     middle = (first + last)/2;
    }
  }
  if (f=1)
    cout<<"Not found! isn't present in the list.\n";



}
