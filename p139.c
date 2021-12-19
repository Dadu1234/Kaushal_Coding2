#include<stdio.h>
#include<stdlib.h>
void Sort(int Arr[],int);
int main()
{
  int *ptr = NULL;
  int iNo = 0;
  int iCnt = 0;
  
  printf("Enter a length of array\n");
  scanf("%d",&iNo);
  
  ptr = (int *)malloc(iNo*sizeof(int));
  
  printf("Enter %d elements\n",iNo);
  
  for(iCnt=0;iCnt<iNo;iCnt++)
  {
    scanf("%d",&ptr[iCnt]);
  }
  Sort(ptr,iNo);
  
  return 0;
}
void Sort(int Arr[],int iSize)
{
  int iMax = 0;
  int iMin = 0;
  int j = 0;
  int i = 0;
  int temp = 0;
  iMax = Arr[0];
  iMin = Arr[iSize/2];
  
  for(i=0;i<(iSize/2)-1;i++)
  {
    for(j=i+1;j<iSize/2;j++)
	{
	  if(Arr[i]>Arr[j])
	  {
	    temp = Arr[i];
		Arr[i] = Arr[j];
		Arr[j] = temp;
	  }
	}
	//printf("%d\t",Arr[i]);
  }
  for(i=0;i<iSize/2;i++)
  {
	  printf("%d\t",Arr[i]);
  }
  
  for(i=(iSize/2);i<(iSize-1);i++)
  { 
    for(j=i+1;j<iSize;j++)
	{ 
	  if(Arr[i]<Arr[j])
	  {
	    temp = Arr[i];
		Arr[i] = Arr[j];
		Arr[j] = temp;
	  }
	}
	//printf("%d\t",Arr[i]);
  }
  for(i=iSize/2;i<iSize;i++)
  {
	  printf("%d\t",Arr[i]);
  }
}