# include<stdio.h>

void Display(int iNo, int iFreq)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iFreq; iCnt++)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number\n");
    scanf("%d",&iValue1);
    printf("Enter frequency\n");
    scanf("%d",&iValue2);
    Display(iValue1, iValue2);
    return 0;
}
