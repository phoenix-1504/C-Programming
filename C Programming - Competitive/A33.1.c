#include <stdio.h> 
#include <stdbool.h> 

bool CheckChar(char *str, char ch) { 
    bool flag = false; 
    while(*str != '\0') { 
        if(ch == *str ) { 
            flag = true; 
            break; 
        } 
        str++; 
    } 
    return flag; 
} 

int main () { 
    char arr[20]; 
    char target; 
    bool iRet = false; 

    printf("Enter a string: "); 
    scanf("%19[^\n]", arr); 

    printf("Enter the character to search for: "); 
    scanf(" %c", &target); // Note the space before %c

    iRet = CheckChar(arr, target); 

    if(iRet) {
        printf("Character '%c' was found in the string.\n", target);
    } else {
        printf("Character '%c' was NOT found in the string.\n", target);
    }

    return 0; 
}
