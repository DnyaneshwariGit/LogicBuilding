/*
Program to divide two numbers
*/

# include <stdio.h>

int Divide(int iNo1, int iNo2)

{
    int iAns = 0;

    if(iNo1 == 0)
    {
        return -1;
    }
    iAns = iNo1 / iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 150, iValue2 = 5, iResult = 0;

    iResult = Divide(iValue1, iValue2);
    printf("Division is : %d\n", iResult);

    return 0;
}





