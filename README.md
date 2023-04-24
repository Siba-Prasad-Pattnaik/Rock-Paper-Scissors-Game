# ROCK PAPER SCISSORS GAME
This is a Rock, Paper, Scissors game programmed in C language. The user plays against the computer, which generates a random choice. The game is executed in the console, and the rules and instructions are provided to the user before starting the game.

The game keeps track of the user's score and the computer's score, which are global variables. The checkOptions function is called to check the winner of each round, and it increments the score of the winner.

The program uses conditional operators and control flow statements to check the various conditions and to choose the winner between the user and the system. The rand() function is used to generate random numbers that will be used as the computer's choice.

The srand(time(0)) function is used to ensure that different random values are generated every time, and the <time.h> header file is included to use it.

The program includes a loop that keeps asking the user for their choice until they quit the game. The user enters their choice as a number, and the program checks whether the input is valid. If the user enters an invalid input, the game ends.

Overall, this is a well-written program that follows the best practices of C programming.
