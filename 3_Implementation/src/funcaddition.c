#include "calcheader.h"
#include<stdio.h>

void funcaddition()
{
	int n, t=0, y=0, number;

    printf("\nENTER THE ELEMENTS TO ADD:");
    scanf("%d",&n);
    printf("ENTER NUMBERS : \n",n);

    while(y<n)
    { 
        scanf("%d",&number);
        t = t + number;
        y=y+1;
    }
    
    printf("SUM OF NUMBERS = %d \n",n,t);
}
