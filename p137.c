#include<stdio.h>
#include<stdbool.h>
bool PrintDigits(int);
int main()
{
  int iNumber = 0;
  bool bRet = false;
  
  printf("Enter a number\n");
  scanf("%d",&iNumber);
  
  bRet = PrintDigits(iNumber);
  if(bRet==true)
  {
	  printf("Repeated\n");
  }
  if(bRet==false)
  {
	  printf("Not repeated\n");
  }
  return 0;
}
bool PrintDigits(int iNo)
{
  int iDigit = 0;
  int iLen = 0;
  int i = 0;
  int j = 0;
  int Arr[10];
  while(iNo!=0)
  {
    iDigit = iNo%10;
	Arr[i] = iDigit;
	i++;
	iLen++;
	iNo = iNo/10;
  }
  for(i=0;i<iLen;i++)
  {
    for(j=i+1;j<iLen;j++)
	{
		if(Arr[i]==Arr[j])
		{
			break;
	    }
	}
  }
  
}