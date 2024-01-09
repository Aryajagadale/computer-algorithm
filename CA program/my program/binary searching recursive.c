#include<iostream>
# include<stdio.h>
using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{

if (r >= l)
{

int mid = l + (r - l)/2;


if (arr[mid] == x)
    return mid;


else if (arr[mid] > x)
return binarySearch(arr, l, mid-1, x);

else
return binarySearch(arr, mid+1, r, x);
}


return -1;
}

int main()
{

 int l, r, p,i, key;
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

   p = ternarySearch(l, r, key, ar);



int result = binarySearch(arr, 0, n-1, x);

 if(result == -1)
cout<<("Element is not present in array\n";

else
 cout<<"Element is present at index "<< result;

return 0;
}
