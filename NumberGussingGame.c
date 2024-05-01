//                !!!! NUMBER GUESSING GAME !!!!

#include<stdio.h>
#include<conio.h>
int main()
{
int n,num,x,i;
char choice,conti;
printf("\t\t\t______A NUMBER GUESSING GAME______\n\n");
printf("Here Follow Some Instruction:\n"); //Game Instruction
printf("1.USER GUESS THE NUMBER.\n");
printf("2.THE NUMBER WILL BE IN TWO DIGIT.\n");
printf("3.THREE LEVEL GAME:\n  (i)EASY[user get 10 chance]\n  (ii)MEDIUM[user get 5 chance]\n  (iii)HARD[user get 3 chance]\n");
printf("PRESS (Y/N) FOR START......\n");// Permission From User
scanf(" %c",&choice);
if(choice=='Y' || choice=='y')
   {
     printf("LET'S START THE GAME.....\n");
     system("cls");                       // Clear the Console Screen
   }
else
   {
    printf("\nPRESS OK FOR EXIT....\n");
    exit(0);
   }
CONTINUE:                       //  To Continue The Game
printf("CHOICE LEVEL:\n1.EASY\n2.MEDIUM\n3.HARD\n");
printf("\n YOUR CHOICE(1/2/3):");
scanf("%d",&n);
switch(n)         // For Choose The Game Level
    {
     case 1:
       printf("YOU HAVE 10 CHANCE TO GUESS THE SECRET NUMBER:\n");
       goto EASY;  
       break;
     case 2:
       printf("YOU HAVE 5 CHANCE TO GUESS THE SECRET NUMBER:\n");
       goto MEDIUM;
       break;
     case 3:
       printf("YOU HAVE 3 CHANCE TO GUESS THE SECRET NUMBER:\n");
       goto HARD;
       break;
    }
EASY:                 // If Choose 1 for easy
srand(time(0));
num = rand()%100;       // For Insert Any Random Number
for(i=1;i<=10;i++)    // for giving 10 chances to User
   {
    printf("\nEnter Your Number:");
    scanf("%d",&x);
      if(num == x)
      {
       printf("\t!! YOU ARE THE WINNER !!\n"); // If User Are Winner
       printf("\tSECRET NUMBER IS %d\n",num);  // Show Secret Number
       printf("Press OK For Exit");
       exit(0);
      }
      else if(num<x)               // if user num. is greater then my number
      {
       printf("\nYour Number Is Greater Then My Number\n");
       printf("You Have %d Chance\n\n",10-i);
      }
      else if(num>x)              // if user number is smaller then my number
      {
       printf("\nYour Number Is Smaller Then My Number\n");
       printf("You Have %d Chance\n\n",10-i);
      }
   }
printf("\n!!! YOU ARE THE LOSSER !!!\n"); // if user fail to find secret number
printf("Scret Number is:%d\n",num);
printf("\n\nContinue Game Press (Y/N):"); // asking for continue game
scanf(" %c",&conti);
    if(conti=='Y'||conti=='y')
     {
      system("cls");              // if yes then clean screen
      printf("\nLET'S START AGAIN.....\n");
      goto CONTINUE;            // for continue game from staring 
     }
    else
     {
      printf("\nPRESS OK FOR EXIT....\n");
      exit(0);   // for exit from game
     }
MEDIUM:
srand(time(0));
num=rand()%100;
for(i=1;i<=5;i++)
    {
     printf("\nEnter Your Number:");
     scanf("%d",&x);
     if(num==x)
        {
         printf("\t!! YOU ARE THE WINNER !!\n");
         printf("\tSECRET NUMBER IS %d\n",num);
         printf("Press OK For Exit");
         exit(0);
        }
     else if(num<x)
        {
         printf("\nYour Number Is Greater Then My Number\n");
         printf("You Have %d Chance\n\n",5-i);
        }
     else if(num>x)
        {
         printf("\nYour Number Is Smaller Then My Number\n");
         printf("You Have %d Chance\n\n",5-i);
        }
    }
printf("\n!!! YOU ARE THE LOSSER !!!\n");
printf("Scret Number is:%d\n",num);
printf("\n\nContinue Game Press (Y/N):");
scanf(" %c",&conti);
    if(conti=='Y'||conti=='y')
       {
system("cls");
        printf("\nLET'S START AGAIN.....\n");
        goto CONTINUE;
       }
    else
       {
        printf("\nPRESS OK FOR EXIT....\n");
        exit(0);
       }
HARD:
srand(time(0));
num=rand()%100;
for(i=1;i<=3;i++)
   {
    printf("\nEnter Your Number:");
    scanf("%d",&x);
    if(num==x)
      {
       printf("\t!! YOU ARE THE WINNER !!\n");
       printf("\tSECRET NUMBER IS %d\n",num);
       printf("Press OK For Exit");
       exit(0);
      }
    else if(num<x)
      {
       printf("\nYour Number Is Greater Then My Number\n");
       printf("You Have %d Chance\n\n",3-i);
      }
    else if(num>x)
      {
       printf("\nYour Number Is Smaller Then My Number\n");
       printf("You Have %d Chance\n\n",3-i);
      }
    }
printf("\n!!! YOU ARE THE LOSSER !!!\n");
printf("Scret Number is:%d\n",num);
printf("\n\nContinue Game Press (Y/N):");
scanf(" %c",&conti);
     if(conti=='Y'||conti=='y')
        {
system("cls");
         printf("\nLET'S START AGAIN.....\n");
         goto CONTINUE;
        }
     else
        {
         printf("\nPRESS OK FOR EXIT....\n");
         exit(0);
        }
return 0;
}
