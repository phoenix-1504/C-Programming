/*
input:23 30
output:108
*/

#include<stdio.h>

void RangeSumEven(int iStart,int iEnd)
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
    int iSum=0;

    while(iStart<=iEnd)
    {
        
        if(iStart%2==0)
        {
            iSum=iStart+iSum;
        }
        printf("%d\t",iSum);
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

    RangeSumEven(iValue1,iValue2); 
    return 0;

}