#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "func.h"

int main()
{
    int counter=0,nom;


    home:
        system("cls");
        printf("___________________________________________________________________________________________________\n");
        printf("..................................WELLCOME TO C program Quiz Game.................................");
        printf("\n___________________________________________________________________________________________________\n");
        printf("\n\t => Press S to start the game\n");
        printf("\n\t => Press A to read about quiz  ");
        printf("\n\n\t => press H for help            ");
        printf("\n\n\t => press Q to quit             \n");
        printf("\n__________________________________________________________________________________________________\n");


    if(toupper(getch())=='H')
    {
        help();
        getch();
        goto home;
    }
    else if(toupper(getch())=='A')
    {
        about();
        getch();
        goto home;

    }
    else if(toupper(getch())=='S')
    {
        start();
        getch();
        goto home;
    }
    else if(toupper(getch())=='Q')
    {
        quit();
    }
    else
    {
        printf("\n\n\n\t\t\t* * * * Please enter valid character ,Thank you ! * * * * \n\n\n");
        getch();
        goto home;
    }
}
