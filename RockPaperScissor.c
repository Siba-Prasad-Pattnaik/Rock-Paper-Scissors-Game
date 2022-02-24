/* 
   Rock Paper Scissor Game Using C Language.
   Author: Siba Prasad Pattnaik
   Created on: 18th May 2021
   Description: This is a simlpe yet nostalgic game which reminds everyone 
   about their childhood. Here it is in digital format of the game where
   the user would be playing with the computer system by entering numbers
   as per the instructions.
   The game is programmed in C language and the inputs from both user
   and computer are accepted in numeric format. Conditional Operators
   and Control Flow Statements are used to check the various conditions
   and choosing the winner between the user and the system.
   Here rand() function is used to generate random numbers which will be
   used as computer's choice. 
   srand(time(0)) is used so the different random values are generated
   every time, that's why <time.h> header file is included.
*/






#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int userScore = 0, compScore = 0;//Global Variables to count the scores.
// Function to check the winner.
void checkOptions(int usr,int comp){
    // 1 = scissor 
    //  2 = paper
    //  3 = rock
   if(usr == comp)
   {
       if(usr == 1){
           printf("You: Scissor\n");
           printf("Computer: Scissor\n");
           printf("____________\n");
           printf("It's a tie\n");
            printf("\n");
          
       }
       else if(usr == 2){
           printf("You: Paper\n");
           printf("Computer: Paper\n");
           printf("____________\n");
           printf("It's a tie\n");
            printf("\n");
        
       }
       else{
           printf("You: Rock\n");
           printf("Computer: Rock\n");
           printf("____________\n");
           printf("It's a tie\n");
            printf("\n");
          
       }
   }
   else if (usr == 1){
       if(comp == 2){
           printf("You: Scissor\n");
           printf("Computer: Paper\n");
           printf("______________\n");
           printf("You Won!! :)\n");
           printf("\n");
           userScore++;
       }
       else{
           printf("You: Scissor\n");
           printf("Computer: Rock\n");
           printf("______________\n");
           printf("You Lost!! :(\n");
           printf("\n");
           compScore++;
       }
   }
   else if(usr == 2){
       if(comp == 1){
           printf("You: Paper\n");
           printf("Computer: Scissor\n");
           printf("______________\n");
           printf("You Lost!! :(\n");
           printf("\n");
           compScore++;
       }
       else{
           printf("You: Paper\n");
           printf("Computer: Rock\n");
           printf("______________\n");
           printf("You Won!! :)\n");
           printf("\n");
           userScore++;
        }
   }
   else if(usr == 3){
       if(comp == 1){
           printf("You: Rock\n");
           printf("Computer: Scissor\n");
           printf("______________\n");
           printf("You Won!! :)\n");
           printf("\n");
           userScore++;
       }
       else{
           printf("You: Rock\n");
           printf("Computer: Paper\n");
           printf("______________\n");
           printf("You Lost!! :(\n");
           printf("\n");
           compScore++;
        }
   }
}
int main(){
    int userChoice,compChoice;
    srand(time(0)); // Used to produce different set of values each time.
    printf("\n");
    printf("\n");
    printf("\t\t=*=*=*=*=*=*= Welcome to Rock, Paper &Scissor Game =*=*=*=*=*=*=\n");
    printf("\n");
    printf("\n");
    printf("***Rules***\n");
    printf("--> Rock wins over Scissor\n");
    printf("--> Scissor wins over Paper\n");
    printf("--> Paper wins over Rock\n");
    printf("--> +1 point in your score if you win\n");
    printf("--> +1 point in computer's score if you lose\n");
    printf("--> 0 point if the match was a tie\n");
    printf("\n");
    printf("***Instructions***\n");
    printf("--> Enter 1 for Scissor\n");
    printf("--> Enter 2 for Paper\n");
    printf("--> Enter 3 for Rock\n");
    printf("--> Enter 4 to get the final score of the Game\n");
    printf("--> Entering any other key will End the Game.\n");
    printf("\n");
    printf("\n");
    // Loop to get the user's choice until he quits.
    do{
        printf("Enter your choice:\n");
    scanf("%d",&userChoice); // Takes the user choice.
    // Condition to check whether user entered valid input or not.
    if(userChoice == 1 || userChoice == 2 || userChoice == 3 || userChoice == 4){
    compChoice = (rand() % 3) + 1; // Used to produce random numbers between 1 & 3
    checkOptions(userChoice,compChoice); //Function call to find the winner
    }
    else {
        printf("Invalid Input!!!!");
        break; // Ends the Game
    }
    }  while(userChoice != 4);
    // Calcutlating and Displaying the final score.
    if(userChoice == 4){
    printf("_________________________\n");
    printf("\n");
    printf("_._._ FINAL SCORES _._._ \n");
    printf("\n");
    printf("You : %d\n", userScore);
    printf("Computer: %d\n", compScore);
    printf("\n");
    // Tie match.
    if(compScore == userScore){
       printf("You are as smart as the computer.\n");
       printf("It was a tie match.\n");
    }
    // Computer Wins.
    else if(compScore > userScore){
       printf("You gave a tough competetion.\n");
       printf("But the computer won the match by %d points.\n",(compScore-userScore));
    }
    // User Wins. 
    else if(compScore < userScore){
       printf("Congrats!!\n");
       printf("You are the champion.\n");
       printf("You won the match by %d points.\n",(userScore-compScore));
    }
    }
    printf("\n");
    printf("\n");
    // getch() method used to pause the Output Console until a key is pressed.
    getch();
}