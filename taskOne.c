#include <stdio.h>
//#include <stdlib.h>

 /*
 ***************************************************************************************
 The following is a simple program for currency conversion
 This program was developed as a class exercise for Computer Science 2, 
 second semester in pursuance of Bsc Electronic Engineering HSHL, Lippstadt, Germany.
 
 Developed by: Eze Nnaemeka Valentine
 **    **   **    **    **    **    **

 It collects input from user, and convert the given value in US Dollar into Chinese Yuan equivalent
 Disclimer: This program was written for educational purpose, and not for other use.
 ***************************************************************************************** 
 */

int main()
{
    //declaring variables
    float dollar;
    float yuan;
   
   // const char yen;

    printf("FX CONVERTER $ \n");
    printf("How much do you want to convert?: \n");
   
    
    scanf("%f", &dollar);                                       //Asking for input
    printf("AMOUNT: $%.2g\n", dollar);                          //Printing amount to the screen


    yuan = (dollar * 6.87);                                     
    //yen = yuan;
    printf("****------*****\n");

//Giving output
    printf("TOTAL: ¥%.6g\n", yuan);
    printf("#####################");

    return 0;

}
