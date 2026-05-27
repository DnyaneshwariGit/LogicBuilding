# include<stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0

BOOL ChkOvwel(char cNo)
{
   if(cNo == 'a' || cNo == 'e' || cNo == 'i' || cNo == 'o' || cNo == 'u' ||
      cNo == 'A' || cNo == 'E' || cNo == 'I' || cNo == 'O' || cNo == 'U')
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
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter character\n");
    scanf("%c",&cValue);
    bRet = ChkOvwel(cValue);
    if(bRet == TRUE)
    {
        printf("It is vowel\n");
    }
    else
    {
        printf("It is not vowel\n");
    }
    return 0;
}
