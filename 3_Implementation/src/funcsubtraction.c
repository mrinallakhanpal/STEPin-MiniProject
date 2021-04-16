#include "calcheader.h"

void funcsubtraction()
{ 
    int a,b;
    int c = 0; 

    printf("\nENTER 1ST NUMBER  : "); 
    scanf("%d", &a); 
    printf("ENTER 2ND NUMBER : "); 
    scanf("%d", &b); 

    c = a - b; //SUBTRACTION OPERATION PERFORMED

    printf("\n%d - %d = %d\n",a,b,c); 
}
