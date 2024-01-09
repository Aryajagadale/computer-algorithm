
#include<stdio.h>
#include<stdlib.h>




int main()
{
  float dl[50],profit[50],curr_dl=0,final_val;
  float ratio[50],output[50];
  int bag_size,max_size;
  
  printf("\nEnter maximum size: ");
  scanf("%d",&max_size);
  printf("\nEnter weights: ");
  for(int i=0;i<max_size;i++)
  {
     scanf("%f",&dl[i]);
  }
  printf("\nEnter profits: ");
  for(int i=0;i<max_size;i++)
  {
     scanf("%f",&profit[i]);
  }
  printf("\nEnter bag size: ");
  scanf("%d",&bag_size);
    
    
   
  for(int i=0;i<max_size;i++)
  {
     ratio[i]=profit[i]/dl[i];
  }
  printf("\nFraction ratio of profit and weight: ");
  for(int i=0;i<max_size;i++)
  {
    printf("%f ",ratio[i]);
  }

  float max=-1;
  int in=0;
  max=ratio[0];
  while(curr_dl <=bag_size){
  for(int i=0;i<max_size;i++)
  {
    if(max<ratio[i])
    {
       max=ratio[i];
       in=i;
    }
  }
    printf("%f -\n",max);
    if(curr_dl + dl[in]< bag_size){
          curr_dl +=dl[in];
          final_val+= profit[in];

     }
     else{
           float remain = bag_size - curr_dl;
           final_val += profit[in]*(remain / dl[in]) ;
           break; 
     }
     ratio[in] = 0;
     max=-1;
  }
  
  
 printf("maximum possible value is %f  ",final_val);

  


  return 0;
}
