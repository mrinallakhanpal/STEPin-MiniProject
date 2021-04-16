#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

#include "calcheader.h"

 
#define new "ENTER OPERATIONS : "
 


int main()
{
    int X=1;
    char Calc_oprn;
 
    
    funcoperations(); //calling
 
    while(X)
    {
        printf("\n");
        printf("%s : ", new);
 
        Calc_oprn=getche();
 
        switch(Calc_oprn)
        {
            case '1': funcaddition();
                      break;
 
            case '2': funcsubtraction();
                      break;

            case '3': funcdivision();
                      break;          
 
            case '4': funcmultiplication();
                      break;

            case '5': funcpower();
                      break;
 
            case '6': funcfactorial();
                      break;
 
            
 
            case 'E':
            case 'e': exit(0);
                      break;
 
            default : system("cls");
 
  
    printf("\n*****Please Enter any one of below available ");
    printf("options****\n");
                      funcoperations();
        }
    }
}




