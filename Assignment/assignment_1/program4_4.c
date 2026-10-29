/*accrpt one number and check whether is divisible by 5 or not.*/

#include<stdio.h>

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number  : ")
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Divisible by 5 ");
    }
    else
    {
        printf("Not Divisible by 5");
    }





    return 0;
}