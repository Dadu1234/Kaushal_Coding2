#include<stdio.h>
#include<stdlib.h>
int MinimumTime(int[],int,int[],int);
int main()
{
  int *ptr1 = NULL;
  int iLength1 = 0;
  int iCnt1 = 0;
  
  int *ptr2 = NULL;
  int iLength2 = 0;
  int iCnt2 = 0;
  
  int iRet = 0;
  
  printf("Enter number of processors\n");
  scanf("%d",&iLength1);
  ptr1 = (int *)malloc(iLength1*sizeof(int));
  
  printf("Enter %d available times\n",iLength1);
  
  for(iCnt1 = 0;iCnt1 < iLength1;iCnt1++)
  {
	  scanf("%d",&ptr1[iCnt1]);
  }
  
  printf("Enter number of tasks\n");
  scanf("%d",&iLength2);
  ptr2 = (int *)malloc(iLength2*sizeof(int));
  
  printf("Enter %d execution times\n",iLength2);
  
  for(iCnt2 = 0;iCnt2 < iLength2;iCnt2++)
  {
	  scanf("%d",&ptr2[iCnt2]);
  }
  
  iRet = MinimumTime(ptr1,iLength1,ptr2,iLength2);
  
  printf("Minimum time is %d\n",iRet);
  
  return 0;
}

int MinimumTime(int Arr[],int iSize1,int Brr[],int iSize2)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	int Crr[50];
	int iIndex = 0;
	int l = 0;
	int k = 0;
	int iCount = 0;
	int iMinimum = 0;
	
	for(i = 0;i < iSize2 - 1;i++)
	{
		for(j = i + 1;j < iSize2;j++)
		{
			if(Brr[i] < Brr[j])
			{
				temp = Brr[i];
				Brr[i] = Brr[j];
				Brr[j] = temp;
			}
		}
	}
	
	iIndex = iSize2 / 4;
	
	for(i = 0;i < iIndex;i++)
	{
	  for(k = 0;k < iSize2;k++)
	  {
		Crr[l] = Arr[i] + Brr[l];
		l++;
		iCount++;
		if(iCount == 4)
		{
			break;
		}
	  }
	}
	printf("New array is :\n");
	for(l = 0;l < iSize2;l++)
	{
		printf("%d\t",Crr[l]);
	}
	iMinimum = Crr[0];
	
	for(l = 1;l < iSize2;l++)
	{
		if(Crr[l] > iMinimum)
		{
			iMinimum = Crr[l];
		}
	}
	return iMinimum;
}
