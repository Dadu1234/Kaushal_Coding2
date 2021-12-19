#include<stdio.h>
#include<stdlib.h>
void merge(int[],int,int[],int);
int main()
{
  int *ptr1 = NULL;
  int iCnt1 = 0;
  int m = 0;
  
  int *ptr2 = NULL;
  int iCnt2 = 0;
  int n = 0;
  
  printf("Enter Actual length of 1st array\n");
  scanf("%d",&m);
  
  printf("Enter Actual length of 2nd array\n");
  scanf("%d",&n);
  
  ptr1 = (int *)malloc((m + n)*sizeof(int));
  
  printf("Enter %d elements in 1st array\n",m+n);
  
  for(iCnt1 = 0;iCnt1 < m+n;iCnt1++)
  {
    scanf("%d",&ptr1[iCnt1]);
  }
  
  ptr2 = (int *)malloc(n*sizeof(int));
  
  printf("Enter %d elements in 2nd array\n",n);
  
  for(iCnt2 = 0;iCnt2 < n;iCnt2++)
  {
    scanf("%d",&ptr2[iCnt2]);
  }
  
  merge(ptr1,m+n,ptr2,n);
  
  return 0;
}
void merge(int Arr[],int iSize1,int Brr[],int iSize2)
{
  int i = 0;
  int j = 0;
  int iCnt = 0;
  for(i = 0;i < iSize1;i++)
  {
    if(Arr[i] == 0)
	{
	  Arr[i] = Brr[iCnt];
	  iCnt++;
	  printf("%d\t",Arr[i]);
	}
	else
	{
	  printf("%d\t",Arr[i]);
	}
  }
}
	  
    
  