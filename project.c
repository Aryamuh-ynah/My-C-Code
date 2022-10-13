#include <stdio.h>
#include <stdlib.h>

char s[8][25]= {"Mitsubishi Attrage","Hyundai Accent","Hyundai Tucson","Toyota Hilux","Mahindra Maxximo HD","Honda HRV"};
char model[8][15]= {"Attrage","Accent","Tucson","Hilux","Maxximo HD","HRV"};
int rent[6]= {2500,2500,3000,3000,3500,3500};
char c[8][20]= {"Red","Black","White","Yellow","Grey","Black","Grey"};
char  maxs_peed [8][12]= {"100 Km/h ","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h"};
int date[6]= {2017,2018,2005,2008,2010,2014};
char name[10];
char nid[10] ;
int payment ;

//void Time()
//{
//    time_t t;
//    time(&t);
//    printf("\t\tYou have rented this car on %s",ctime(&t));
//}

void display()
{
    system("cls");
    printf("\n\n\t\t\tThis is our collection of cars \n");
    printf("\t\t-----------------------------------------------------\n\n\n");
    int num=1;
    for(int i=0 ; i<6; ++i)
    {
        printf("\t\t\t");
        printf("Enter %d\t- To Select  %s\n",num,s[i]);
        num++ ;
    }
}
int details(int n)
{
    system("cls");
    printf("\n\n\n\t------------------------------------\n");
    printf("t\tYou Have Selected :-\n ");
    printf("\t------------------------------------\n\n\n");
    printf("\t\t\tCar Brand:%s\n\n",s[n-1]);
    printf("\t\t\tModel :  %s\n\n",model[n-1]);
    printf("\t\t\tColor : %s\n\n",c[n-1]);
    printf("\t\t\tMaximum Speed : %s\n\n",maxs_peed[n-1]);
    printf("\t\t\tPrice : %d/-\n\n",rent[n-1]);
    return 0;

}
void check(int m,int pay)
{
    if (pay>= rent[m])
        printf("\n\n\n\t\t\tProcess has been done successfully!! \n");
    else
        printf("\n\n\n\t\t\tNot Available \n");


}
int user_input(int num)
{
    system("cls");
    printf("t\t\n\n\n\n");
    printf("\t\tWARNING!! IF ANY DAMAGE HAPPENS TO THIS CAR.YOU WILL BE THE ONLY RESPONSIBLE ONE..\n\n");
    printf("\t\t\tPlease Provide Your Personal Details  : \n");
    printf("\n\n");
    printf("\t\t\tEnter Your Name : ");
    getchar();
    scanf("%[^\n]%*c",name);
    printf("\n\n");
    printf("\t\t\tEnter Your National ID : ");
    scanf("%[^\n]%*c",nid);
    printf("\n\n");
    printf("\t\t\tPayment Amount: " );
    scanf("%d",&payment);
    check(num-1,payment);
    printf("\n");
    //Time();
    return 0;
}


int main()
{
    int decide;
    int choice;
    printf("\n\n\t\tWelcome to Fia Car Rental\n");
    printf("\n\n\t\t---------------------------------------------\n\n\n");
    printf("\t\tDo you want to continue?(1.Yes 2.No): ");
    scanf("%d",&decide);
    while (decide !=3)
    {

        display();
        printf("\n\n\n\t\t\tEnter your choice: ");
        scanf("%d",&choice);
        details(choice);
        printf("Are you sure you want to rent this car? (1.yes 2.no 3.exit): ");
        scanf("%d",&decide);
        if (decide==1)
        {
            user_input(choice);
            printf("\t\t\tThank you %s for choosing Fia car rental. Have a safe and happy journey.", name);
            printf("\n\t\t\tDo you want to continue ?(1.yes 2.no)\n\t\t\t\t ");
            scanf("%d",&decide);
            if (decide==2)
            {
                break;
            }

            system("cls");
        }

        else
        {
            if(decide==2)
            {
                system("cls");
                continue ;
            }
            else if  (decide==3)
            {
                system("cls");
                printf("\n\n\n\t\t\tThat was CSE lab project\n");
                break ;
            }

        }
    }
    return 0;
}


