/*
input:23 35
output:24 26 28 30 32 34 
*/

#include<stdio.h>

void RangeEven(int iStart,int iEnd)
{
    
    if(iStart<0)
    {
        iStart = -iStart;
    }
     if(iEnd<0)
    {
        iEnd = -iEnd;
    }
    if(iStart>iEnd)
    {
        printf("Invali Range");
        return;
    }

    while(iStart<=iEnd)
    {
        if(iStart % 2==0)
        {
            printf("%d\t",iStart);
        }

        iStart++;
    }
}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter starting point: ");
    scanf("%d",&iValue1);

    printf("Enter ending point: ");
    scanf("%d",&iValue2);

    RangeEven(iValue1,iValue2); 
    return 0;

}