
#include <stdio.h>
#include <stdlib.h>
char s[8][25]= {"Mitsubishi Attrage","Hyundai Accent","Hyundai Tucson","Toyota Hilux","Mahindra Maxximo HD","Honda HRV"};
char model[8][15]= {"Attrage","Accent","Tucson","Hilux","Maxximo HD","HRV"};
int rent[6]= {2500,2500,3000,3000,3500,3500};
char c[8][20]= {"Black","White","Yellow","Grey","Black","Grey"};
char  maxs_peed [8][12]= {"100 Km/h ","150 Km/h","170 Km/h","130 Km/h","140 Km/h","130 Km/h"};
int date[6]= {2017,2018,2005,2008,2010,2014};
char name[10];
char nid[10] ;
int payment ;


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
void check(int m,int days,int pay)
{
    int pay_amount=(days)*rent[m];
    if (pay>=pay_amount)
    {
        printf("\n\t\t\tThank you %s for choosing our car rental", name);
        printf("\n\n\t\t\tProcess has been done successfully!! \n");
    }
    else
    {
        printf("\n\n\t\t\tNot Available \n");
    }
}

int user_input(int num)
{
    int d1,d2,m1,m2,y1,y2,days;
    system("cls");
    printf("t\t\n\n\n");
    printf("\t\tWARNING!! IF ANY DAMAGE HAPPENS TO THIS CAR.YOU WILL BE THE ONLY RESPONSIBLE ONE..\n\n");
    printf("\t\t\tPlease Provide Your Personal Details  : \n");
    printf("\n");
    printf("\t\t\tEnter Your Name : ");
    getchar();
    scanf("%[^\n]%*c",name);
    printf("\n");
    printf("\t\t\tEnter Your National ID : ");
    scanf("%[^\n]%*c",nid);
    printf("\n");
    printf("\t\t\tEnter how many days you want to rent? ");
    scanf("%d",&days);
    printf("\n");
    printf("\t\t\tEnter the date you want to rent this car (dd mm yyyy): ");
    scanf("%d%d%d",&d1,&m1,&y1);
    printf("\n");
    printf("\t\t\tEnter the date you will return  this car (dd mm yyyy): ");
    scanf("%d%d%d",&d2,&m2,&y2);
    printf("\n");

    printf("\t\t\tTotal amount: %d\n", days*rent[num-1]);
    printf("\t\t\tPayment amount: ");
    scanf("%d",&payment);
    check(num-1,days,payment);
    printf("\n");
    return 0;
}


int main()
{
    int decide;
    int choice;
    printf("\n\n\t\tWelcome to Car Rental Management System\n");
    printf("\n\n\t\t---------------------------------------------\n\n\n");
    printf("\t\tDo you want to continue?(1.Yes 2.No): ");
    scanf("%d",&decide);
    while (decide !=3)
    {

        display();
        printf("\n\n\n\t\t\tEnter your choice: ");
        scanf("%d",&choice);
        details(choice);
        printf("Are you sure you want to rent this car? : (1.yes 2.no 3.exit) ");
        scanf("%d",&decide);
        if (decide==1)
        {
            user_input(choice);
            printf("n\n\t\t\tDo you want to continue ?(1.yes 2.no) ");
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


