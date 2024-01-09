
#include<iostream>
# include<stdio.h>
using namespace std;

int ternarySearch(int l, int r, int key, int ar[])

{
    while (r >= l) {

        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;


        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key)
        {
            return mid2;
        }



        if (key < ar[mid1])
        {
            r = mid1 - 1;
        }
        else if (key > ar[mid2])
        {
            l = mid2 + 1;
        }
        else {


            l = mid1 + 1;
            r = mid2 - 1;
        }
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


    cout<<"Index of "<< key<<"is "<< p;


}
