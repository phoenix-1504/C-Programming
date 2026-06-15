////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  input : iRow = 3    iCol = 4 
//  output : A  B   C   D
//           a  b   c   d
//           A  B   C   D
//           a  b   c   d      
////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern (int iRow, int iCol)
{
    int i = 0;
    int j = 0;
    char ch = '\0';
    char CH = '\0' ;

    for (i = 1  ; i<=iRow; i++ )
    {
        for (j = 1, ch = 'A', CH= 'a'; j<=iCol; j++,ch++, CH++)
        {
            if((i%2)==0)
            {
                printf("%c\t", ch);
            }
            else
            {
                printf("%c\t", CH);
            }
        }   
        printf("\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    printf("Enter number of Rows :");
    scanf("%d",&iValue1);

    printf("Enter number of Columns :");
    scanf("%d",&iValue2);


    Pattern(iValue1, iValue2);

    return 0;
}