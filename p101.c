#include<stdio.h>
void DisplaySpecial(char[],char[],char[]);
int main()
{
  char Arr[30];
  char Brr[30];
  char Crr[30];

  
  printf("Enter 1st string\n");
  scanf("%s",Arr);
  
  printf("\nEnter 2nd string\n");
  scanf("%s",Brr);
  
  printf("\nEnter 3rd string\n");
  scanf("%s",Crr);
  
  DisplaySpecial(Arr,Brr,Crr);
  
  return 0;
}
void DisplaySpecial(char A[30],char B[30],char C[30])
{
  int i = 0;
  for(i=0;A[i]!='\0';i++)
  {
    if((A[i]=='a') || (A[i]=='e') || (A[i]=='i') || (A[i]=='o') || (A[i]=='u') || (A[i]=='A') || (A[i]=='E') || (A[i]=='I') || (A[i]=='O') || (A[i]=='U'))
    A[i] = '*';
  }
  for(i=0;B[i]!='\0';i++)
  {
	if((B[i]>='a' && B[i]<='z') || (B[i]>='A' && B[i]<='Z'))
	{
      if(!((B[i]=='a') || (B[i]=='e') || (B[i]=='i') || (B[i]=='o') || (B[i]=='u') || (B[i]=='A') || (B[i]=='E') || (B[i]=='I') || (B[i]=='O') || (B[i]=='U')))
	  {
	     B[i] = '@';
	  }
	}
  }
  for(i=0;C[i]!='\0';i++)
  {
     if((C[i]>='a') && (C[i]<='z'))
	 {
	   C[i] = C[i]-32;
	 }
  }
  printf("%s%s%s",A,B,C);
}