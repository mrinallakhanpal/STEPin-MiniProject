#include "calcheader.h"
#include<math.h>

void funcpower()
{
    double a,num, p;
    printf("\nENTER 2 NUMBERS \n");
    printf("NUMBER: ");
    scanf("%lf",&a);
 
    printf("POWER : ");
    scanf("%lf",&num);
 
    p=pow(a,num);
 
    printf("\n%lf TO THE POWER %lf = %lf \n",a,num,p);
}
