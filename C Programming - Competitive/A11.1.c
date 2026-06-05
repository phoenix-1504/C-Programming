/*
input:23 35
output:23 24 25 26 27 28 29 30 31 32 33 34 35
*/

#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
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
        printf("%d\t",iStart);
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

    RangeDisplay(iValue1,iValue2); 
    return 0;

}