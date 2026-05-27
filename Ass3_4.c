# include<stdio.h>

void DisplayConvert(char cValue)
{
   if(cValue == 'a')
   {
    printf("A");
   }
   else if (cValue == 'D')
   {
    printf("d");
   }
   
   
}
int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}
