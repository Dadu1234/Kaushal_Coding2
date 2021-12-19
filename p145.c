#include<stdio.h>
void DecimalToBinary(int);
int main()
{
  int iNumber = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iNumber);
  
  DecimalToBinary(iNumber);
  
  return 0;
}
void DecimalToBinary(int iNo)
{
  int Arr[32];
  int i = 0;
  int iDigit = 0;
  
  while(iNo!=0)
  {
    iDigit = iNo%2;
	Arr[i] = iDigit;
	i++;
	iNo = iNo/2;
  }
  for(i=i-1;i>=0;i--)
  {
    printf("%d\t",Arr[i]);
  }
}
	