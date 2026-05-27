# include<stdio.h>
typedef int BOOL;
#define True 1
#define False 0

BOOL CheckEven(int iNo)
{
   if (iNo % 2 == 0)
   {
    return True;
   }
   else
   {
    return False;
   }
}
int main()
{
    int iValue = 0;
    BOOL bRet = False;
    printf("Enter number\n");
    scanf("%d",&iValue);
   
    bRet = CheckEven(iValue);

    if (bRet == True)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    return 0;
}
