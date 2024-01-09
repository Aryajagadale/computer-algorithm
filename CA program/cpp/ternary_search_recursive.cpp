// recursive ternary search

#include<iostream>
# include<stdio.h>
using namespace std;

// Function to perform Ternary Search
int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {


        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;


        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }


        if (key < ar[mid1]) {

            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2]) {


            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else {


            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }

    return -1;
}

// Driver code
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


    cout<<"Index of "<< key<<"is "<< p;
}
