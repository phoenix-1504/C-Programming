#include <stdio.h>

void Update  ( char *  str)
{
   int iCount = 0;

   while (*str != '\0')
   {
    if ( *str == 'L')
    {
        *str = '_' ;
    }
    str++;     
   }

}

int main ()
{
    char Arr[50] = {'\0'} ;

    

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr); 

    Update(Arr);

    printf("Frequency is : %s\n", Arr);

    return 0 ;
}