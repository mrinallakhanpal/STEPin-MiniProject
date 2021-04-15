#include "func.h"
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void congo()
{
    system("cls");
    printf("\n\n\n\n\t\t");
    for(int row=1;row<=15;row++)
        {
            for(int col=1;col<=65;col++)
                {
                    if(row==1||row==15||col==1||col==65)
                        printf("$");
                    else if(row==8 && (col==2))

                        printf("\t* * * CONGRATULATIONS YOU ARE A MILLIONAIRE! * * *");

                    else
                        printf(" ");
                }
printf("\n\t\t");
}
printf("\n\n\n\n\n\n\n");
}