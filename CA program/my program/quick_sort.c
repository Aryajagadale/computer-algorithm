#include<stdio.h>
void quicksort(int number[25],int first,int last){
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j){
         while(number[i]<=number[pivot]&&i<last)
         i++;
         while(number[j]>number[pivot])
         j--;
         if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);
   }
}
void printArray(int A[], int size)
{
int i;
for (i=0; i < size; i++)
printf("%d ", A[i]);
printf("\n");
}

int main(){
   int n,i;
printf("enter the size of array =");
scanf("%d",&n);
int arr[n] ;

printf("enter elements =");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

quicksort(arr, 0, n- 1);
printf("\n Sorted array is ");
printArray(arr, n);
return 0;
}
