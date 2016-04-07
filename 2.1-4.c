#include<stdio.h>
main(int argc ,char *argv[])
{
  printf("Please enter the common size of the 2 argument arrays\n");
  int i;
  int temp;
  int carry;
  int size_of_numbers; 
  scanf("%d",&size_of_numbers);
  int A[size_of_numbers];
  int B[size_of_numbers];
  int C[size_of_numbers+1];

  printf("Please enter the values of each binary number left to right\n");
  printf("Array one\n");

  for(i=0;i<size_of_numbers;i++)
    {
      printf("Index %d\n",i+1);
      scanf("%d",&temp);
      if((temp<2)&&(temp>=0)) 
	{ A[i] = temp;
	}
      else {
	printf("Number have to be in binary(0s 1s) RESTART\n");
	return 1;
      }
    }
  printf("Array two\n");
  for(i=0;i<size_of_numbers;i++)
    {
      printf("Index %d\n",i+1);
      scanf("%d",&temp);
      if((temp<2)&&(temp>=0)) 
	{ B[i] = temp;
	}
      else {
	printf("Number have to be in binary(0s 1s) RESTART\n");
	return 1;
      }
    }

  printf("Array one\n");
  for(i=0;i<size_of_numbers;i++)
    {
      printf("\t%d", A[i]);
    }
  printf("\nArray two\n");
  for(i=0;i<size_of_numbers;i++)
    {
      printf("\t%d",B[i]);
    }
  printf("\nCalculating.....\n");

  carry = 0;   
  for(i=size_of_numbers;i>=1;i--)
    { 
      temp = carry + A[i-1] + B[i-1];
      if(temp == 3){
	  C[i] = 1; carry = 1;
      }else if(temp == 2){
	C[i] = 0; carry = 1; 
      }else if(temp == 1){
	C[i] = 1; carry = 0; 
      }else {
	C[i] = 0; carry = 0;
      }
    }
  C[0] = carry; 

  for(i=0; i<=size_of_numbers; i++)
    {
      printf("%d\t",C[i]);
    }
  printf("\n^ANSWER\n");
return 0;
}
