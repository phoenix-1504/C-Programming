#include <stdio.h>

int main ()
{
    char Arr[50] = {'\0'} ;

    printf("Enter String : \n");
    scanf("%s", Arr);   //ISSUE : DOES NOT PRINT VALUE AFTER FIRST SPACE OF THE INPUT.
    
    printf("Entered String is : %s\n", Arr);

    return 0 ;
}