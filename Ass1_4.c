# include<stdio.h>

typedef int BOOL;
#define True 1
#define False 0


BOOL Check(int iNo)
{
    if(iNo % 5 == 0)
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
    bRet = Check(iValue);

    if(bRet == True)
    {
        printf("%d is divisible by 5\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 5\n",iValue);
    }
    return 0;
}
