#include<stdio.h>

main(int argc, char *argv[])
{
  int numbers;
  int i,j,temp;
  printf("Total numbers to be sorted\n");
  scanf("%d",&numbers);
  int data[numbers];
  printf("Please enter the numbers...\n");
  for(i=0;i<numbers;i++){
    scanf("%d",&data[i]);
  }

  printf("SORTING.....\n");

  for(j=1;j<numbers;j++){
    temp = data[j];
    //Insert A[j] into the sorted sequence A[1...j-1]
    i = j-1;
    while ((i>=0)&&(data[i]>temp)){
      data[i+1] = data[i];
      i = i - 1;
    }
    data[i+1] = temp; 
  } 

  for(i=0;i<numbers;i++){
    printf("\t%d",data[i]);
  }
  printf("\n");
  return 0; 
}
