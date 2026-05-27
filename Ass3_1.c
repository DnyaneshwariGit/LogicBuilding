# include<stdio.h>

void PrintEven(int iNo)
{
//    if (iNo <= 0)
//    {
//     return -1;
//    }

   int even = 2;
   for (int i = 0; i < iNo; i++)
   {
       printf("%d\t",even);
       even = even + 2;
   }
   
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}
