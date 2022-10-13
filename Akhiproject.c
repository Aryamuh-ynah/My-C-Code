
#include<stdio.h>
#include<stdlib.h>

char name[20],correct;
int userScore=0,countQ=0;

void calculateScore()
{
    if (userScore >= 40&&userScore <= 100)
    {
        printf("\n\n\t\tCONGRATULATION!!\n\t\t %s! You win the quiz.\n",name);
        printf("you got %d numbers.\n",userScore);
        printf("your %d Answers were correct.\n",countQ);
    }
    else if(userScore >= 10&&userScore < 40)
    {
        printf("\n\n\t\t\tSORRY!!\n\t\t%s!! YOU LOOSE THE GAME.\n\t\tyou got %d numbers.\n\t\tyour %d Question was correct.\n",name,userScore, countQ);
        printf("\n\n--------*******Better luck lext time*********--------\n");
    }

}
char result(char choose,char correct)
{
    char next;
    if (choose==correct)
    {
        countQ++;
        userScore=userScore+10;
        printf("\n\n\t\tANSWER IS CORRECT!\n");
        printf("Press (Y) to continue Quiz ");
        printf("If you want to end this Quiz then press (N)\n");
        next=getch();
        return(next);
    }
    else
    {
        printf("\n\n\t\t\tSORRY!! ANSWER IS WRONG!\n");
        printf("Correct answer is -> %c\n", correct);
        printf("\nPress (Y) to continue Quiz ");
        printf("If you want to end this Quiz then press (N)\n");
        next=getch();
        return(next);
    }
}
void question()
{
    char choose;
    printf("1.Q-which data type store characters?\n");
    printf("\t(A).Int\t\t(B).float\n");
    printf("\t(C).char\t(D).byte\n");
    printf("Choose your answer");

    choose=getch();
    correct='c';

    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("2.Q-How many bytes consume Int data type in 64 bit OS?\n");
    printf("\t(A).4\t(B).6\n");
    printf("\t(C).2\t(D).8\n");
    printf("Choose your answer");
    choose=getch();
    correct='a';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("3.Q-How many bytes consume Float data type in 64 bit OS?\n");
    printf("\t(A).6\t(B).4\n");
    printf("\t(C).2\t(D).8\n");
    printf("Choose your answer");
    choose=getch();
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("4.Q-How many bytes consume Double data type in 64 bit OS?\n");
    printf("\t(A).4\t(B).6\n");
    printf("\t(C).2\t(D).8\n");
    printf("Choose your answer");
    choose=getch();
    correct='d';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("5.Q-How many bytes consume char data type in 64 bit OS?\n");
    printf("\t(A).4\t(B).6\n");
    printf("\t(C).1\t(D).8\n");
    printf("Choose your answer");
    choose=getch();
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("6.Q-Which type of values is store in Int data type?\n");
    printf("\t(A).integer\t(B).floating point\n");
    printf("\t(C).character\t(D).string\n");
    printf("Choose your answer");
    choose=getch();
    correct='a';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("7.Q-Which type of values is store in float data type?\n");
    printf("\t(A).integer\t(B).floating point\n");
    printf("\t(C).character\t(D).string\n");
    printf("Choose your answer");
    choose=getch();
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("8.Q-Which type of values is store in double data type?\n");
    printf("\t(A).integer\t(B).floating point\n");
    printf("\t(C).character\t(D).string\n");
    printf("Choose your answer");
    choose=getch();
    correct='b';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("9.Q-What is string?\n");
    printf("\t(A).Integer values\t(B).floating values\n");
    printf("\t(C).Character array\t(D).Array\n");
    printf("Choose your answer");
    choose=getch();
    correct='c';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
    system("cls");
    printf("10.Q-What is structure?\n");
    printf("\t(A).Integer\t(B).float\n");
    printf("\t(C).Character\t(D).User defined data type\n");
    printf("Choose your answer");
    choose=getch();
    correct='d';
    correct=result(choose,correct);
    if (correct=='n'||correct=='N')
    {
        return;
    }
}
void main()
{
    char ch;
    printf("\t\t\tC PROGRAM QUIZ GAME\n");
    printf("\n\t\t________________________________________");

    printf("\n\t\t\t\t WELCOME ");
    printf("\n\t\t\t\t    to ");
    printf("\n\t\t\t\t THE GAME ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\nEnter your name:\n");
    gets(name);
    printf("\nHello! %s\n",name);
    printf("Here are some rules of this Game.\n");
    printf("1. You can choose any option.\n");
    printf("2. You need to answer 10 question\n");
    printf("3. Every question is 10 number\n");
    printf("4. Total number is 100\n");
    printf("5. We decide you win the quiz or not\n");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");

    printf("\nPress (Y) for start quiz otherwise press (N)\n");
    ch=getch();
    if(ch=='y'||ch=='Y')
    {
        system("cls");
        question();
        calculateScore();
    }
    else if(ch=='n'|| ch=='N')
    {
        return;
    }
}


