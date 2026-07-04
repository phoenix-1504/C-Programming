#include <stdio.h>

void strlenX (char *str)
{
   int iCount = 0;

   *str = 'A';

}

int main ()
{
    char Arr[50] = {'\0'} ;
    
    

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr); 


    printf("String  is : %s\n", Arr);

    return 0 ;
}