#include<stdio.h>
int SpecialSeries(int);
int main()
{
  int iIndex = 0;
  int iRes = 0;
  printf("Enter index at which you want to print number\n");
  scanf("%d",&iIndex);
  
  iRes = SpecialSeries(iIndex);
  
  printf("Number at that index is %d\n",iIndex);
  
  return 0;
}
int SpecialSeries(int iValue)
{
  static int iCnt = -1;
  int iCnt1 = 0;
  int i = 0;
  int Arr[20];
  
  for(i=0;i<20;i++)
  {
	  if(i%2==0)
	  {
		  Arr[i] = i;
	  }
	  else
	  {
		  iCnt++;
		  Arr[i] = iCnt;
	  }
      if(i==iValue)
	  {
		  return Arr[i];
	  }
  }
}