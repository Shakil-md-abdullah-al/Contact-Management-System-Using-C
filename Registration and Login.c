#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct log{
char fname[50];
char lname[50];
char email[120];
char phone[15];
char username[30];
char password[32];
}*pUser;

void login(void)
{
    system("CLS");
FILE *fp;
char uName[30],pwd[32],c;
int i;

pUser=(struct log *)malloc(sizeof(struct log));

 printf("\n\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\t\t\t::                                        ::\n");
    printf("\t\t\t\t\t\t::::::::::      Login Menu       :::::::::::\n");
    printf("\t\t\t\t\t\t::                                        ::\n");
    printf("\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n\n\n");
    if ( ( fp=fopen("Registration.dat", "r+")) == NULL) {
                if ( ( fp=fopen("Registration.dat", "w+")) == NULL) {
                    printf ("\n\t\t\t\t\t\tCould not open file\n");
                    printf("\n\t\t\t\t\t\tPress any key to continue");
                    getch();
                    home();
                }
            }
            printf("\n\t\t\t\t\t\tUser Name: ");
            scanf("%s",&uName);
            printf("\n\t\t\t\t\t\tPassword: ");
            scanf("%s",&pwd);
            //printf("\n\t\t\t\t\tI am Here");
            while( fread (pUser,sizeof(struct log),1,fp)==1)
            {

                if( strcmp(pUser->username,uName) == 0) {
                    if(strcmp(pUser->password,pwd) == 0) {
                            User();
                    }
                    //User();
                }
                 else
                {
                  printf("\n\t\t\t\tInvalid Username or Password. Please Try again....\n");
                  getch();
                  printf("\n\n");
                  login();
                }
            }
}

int reg()
{
system("cls");
    FILE *fp;
    char uName[30], pwd[30];int i;char c;
    char fname[80],phone[15],email[50],nid[20],dob[30];

    pUser=(struct log *)malloc(sizeof(struct log));
    printf("\n\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n");
    printf("\t\t\t\t\t\t::                                        ::\n");
    printf("\t\t\t\t\t\t::::::::::   Registration Menu   :::::::::::\n");
    printf("\t\t\t\t\t\t::                                        ::\n");
    printf("\t\t\t\t\t\t::::::::::::::::::::::::::::::::::::::::::::\n\n\n");
     do
            {
                if ( ( fp=fopen("Registration.dat", "a+")) == NULL) {
                    if ( ( fp=fopen("Registration.dat", "w+")) == NULL) {
                        printf ("\n\t\t\t\t\t\tCould not open file\n");
                        printf("\n\t\t\t\t\t\tPress any key to continue");
                        getch();
                        home();
                    }
                }
                fgets(fname, 80, stdin);//bug
                printf("\n\t\t\t\t\t\tFirst Name: ");
                gets(pUser->fname);
                printf("\n\t\t\t\t\t\tLast Name: ");
                gets(pUser->lname);
                printf("\n\t\t\t\t\t\tPhone Number : ");
                gets(pUser->phone);
                printf("\n\t\t\t\t\t\tEmail Address: ");
                gets(pUser->email);
                printf("\n\t\t\t\t\t\tChoose A User Name: ");
                scanf("%9s",pUser->username);
                printf("\n\t\t\t\t\t\tChoose A Password: ");
                scanf("%9s",pUser->password);
                fwrite (pUser, sizeof(struct log), 1, fp);
                //printf("\n\t\t\tYour Information: \n");
                //fprintf(fp,"Name: %s\nPhone: %s\nEmail: %s\nNID: %s tk\nDate of Birth: %s\nUsername:%s,\nPassword:%s", pUser->fname, pUser->phone, pUser->email,pUser->nid,pUser->dob,pUser->username, pUser->password);
                //show_item();
                fclose(fp);
                printf("\n\n");
                printf("\n\t\t\t\t\t\tWould You Like To Add Another Account? (Y/N): ");
                scanf(" %c",&c);//skip leading whitespace


            }while(c=='Y'||c=='y');
            if (c=='N'||c=='n')
            {
                system("CLS");
                login();
            }
}


