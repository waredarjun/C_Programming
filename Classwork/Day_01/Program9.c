

#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////
//
//  Function Name   : Addition
//  Input           : Interger, Interger
//  Output          : Interger
//  Description     : Perform addition
//  Date            : 04/10/2026
//  Auther          : ARJUN ASHOK WARED
//
//
//
////////////////////////////////////////////////////////////////
int Addition(  
            int iNo1,       //First Input
            int iNo2
            )
{
    int iAns = 0;

    iAns = iNo1  + iNo2 ;           //BusinessLogic

    return iAns;
}
////////////////////////////////////////////////////////////////
//                      
//  Entery point of the Application
//
////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0 , iResult = 0  ;

    

    printf("Enter First number : \n");
    scanf("%d",&iValue1);

    printf("Enter Secound number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);   


    printf("Addition is : %d\n",iResult);



    return EXIT_SUCCESS;
}

////////////////////////////////////////////////////////////////
//
//  Step 5:Test the Program
//  
//  Tested test Cases
//  ----------------------------------------
//  Input1          Input2          Output       
//------------------------------------------
//  10              11              21
//  11              0               11
//  0               11              11
//  20              -9              11
//  -9              20              11
//  -20             -11             -31
//
//
////////////////////////////////////////////////////////////////

