# include<stdio.h>

typedef int BOOL;
#define True 1
#define False 0


void Accept(int iNo)
{
   int i = 0; 
   for (int i = 1; i <= iNo; i++)
   {
       printf("*");
   }
}
int main()
{   
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    Accept(iValue);
    return 0;
}
