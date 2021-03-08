//Program to check the given no is perfect or not 

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOLEAN;

BOOLEAN  ChkPerfect(int iValue)
{
	int iRet = 0;
	int iCnt = 0;
	int sum = 1;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
	
	if((iValue == 1)||(iValue == 0))
	{
		return FALSE;
	}

   	
	for(iCnt = iValue/2;iCnt >= 2;iCnt--)
	{
		if((iValue%iCnt) == 0)
		{
	        sum = sum+iCnt;
		}			
	}
	
	if(sum == iValue)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}	

int main()
{
	int iNo = 0;
	BOOLEAN bRet = FALSE;
	
	printf("Enter The Number \n");
	scanf("%d",&iNo);
	
	bRet = ChkPerfect(iNo);
	
	if(bRet == TRUE)
	{
		printf("Given number is perfect Number \n");
	}
	else
	{
		printf("Given number is not perfect no\n");
	}
	
	return 0;
}

/*
output

Enter The Number
6
Given number is perfect Number

D:\ProgramTopicWise\LB\ProblemsOnDigits\ChkPerfect(BackWardTravelsel)>myexe
Enter The Number
12
Given number is not perfect no

*/