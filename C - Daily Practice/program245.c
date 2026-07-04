#include <stdio.h>

void Display(char *str)
{
   printf("%c\n", *str);
   str++ ; 

   printf("%c\n", *str);
   str++ ; 

   printf("%c\n", *str);
   str++ ; 

}

int main ()
{
    char Arr[50] = {'\0'} ;

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr); 
    

    Display(Arr);
    printf("Size of string : %d\n", Arr);
    return 0 ;
}