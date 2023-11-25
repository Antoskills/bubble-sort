//bubble sort
#include <stdio.h>

int main()
{
  //insert value
  int ar[20],n,i,j,temp;
  printf("Enter the size of array: ");
  scanf("%d" ,&n);
  printf("Enter the elements :");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  //logic
  for(i=0;i<n-1;i++)
    {
      for(j=0;j<n-i-1;j++)
        {
          if(ar[j]>ar[j+1])
          {
           temp=ar[j];
           ar[j]=ar[j+1];
           ar[j+1]=temp;
          }
        }
    }
  //display
  printf("sorted array is :");
  for(i=0;i<n;i++)
    printf("%d\t",ar[i]);
    
  
    

  return 0;
}