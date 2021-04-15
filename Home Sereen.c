#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int home()
{
  printf("\n\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\t\t\t::                                        ::\n");
    printf("\t\t\t\t\t\t::::::::::       Home Menu       :::::::::::\n");
    printf("\t\t\t\t\t\t::                                        ::\n");
    printf("\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n\n\n");
    printf("\t\t\t\t\t\tSelect an Option From Below:\n");
    printf("\t\t\t\t\t\t1. Login\n");
    printf("\t\t\t\t\t\t2. Register\n");
    printf("\t\t\t\t\t\t3. About Us\n");

    int ch;
     printf("\n\t\t\t\t\t\tEnter Your Choice: ");
     scanf("%d",&ch);

     switch(ch)
     {
     case 1:
        login();
        break;
     case 2:
        reg();
        break;
     case 3:
        about();
        break;
     default:
         printf("\a\n\t\t\t\t\t\tWrong Input\n");
         printf("\t\t\t\t\t\tPress any key to go back.");
         getch();
         system("CLS");
         home();
     }
}

