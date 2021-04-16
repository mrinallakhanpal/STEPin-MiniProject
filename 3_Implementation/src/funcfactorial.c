#include "calcheader.h"

int funcfactorial()
{
    int i,fact=1,num;
 
    printf("\nENTER THE NUMBER : ");
    scanf("%d",&num);
 
    if (num<0)
    {
        printf("\nPLEASE ENTER A POSITIVE NUMBER");
        
        return 1;
    }               
 
    for(i=1;i<=num;i++)
    fact=fact*i;

    printf("\n");

    printf("FACTORIAL OF ENTERED NUMBER %d IS : %d\n",num,fact);
    
    return 0;
}
