Brief introduction of the program:

The program runs the game "Rock, Paper, Scissors, Lizard and Spock" for the desired amount of times a user wants to play. The program takes user input for each game using a loop and also generates a random choice to be used as the computer's input using the same loop. Program also checks whether the user input is in range of the choices available. If not, it asks for another input using a while loop. For each game, it outputs the game number, the user's and computer's choices and the result of the game. In the end, it displays the total games played, total wins and losses and the number of games that tied.

Compiling the program:

The program should be compiled in the terminal using the "gcc" and appropriate flags which are "-std=c99", "-Wall", "-pedantic" and '-lm". The exact code to compile the program is:

"gcc -std=c99 -Wall -pedantic -lm a2.c [-o a2]"

The [-o a2] is optional but helps in giving an easy filename.

Running the program:

Program can be run in the terminal using "./[filename]" (filename can be any name you give to the file. By default, it is a.out). Once the program starts, it displays the name of the game and asks for the number of games one wants to play. User can input any positive integer. After that, the user will need to input his/her choice for each game and result will be displayed. Those are the only user inputs required for this game.

Limitations:

The program is only compiled and tested on a raspberry pi and is not guaranteed to work on every system available. The number of games can only be a positive integer which means the maximum number of games playable are 2,147,483,647. It cannot be anything negative, a rational number, a character or a string. For user's choice in each game, the user needs to input anything between 1 and 5. Although, the program takes care of any integer entered by the user, it cannot handle any rational number, character or a string. Adding the functionality to handle other data types will improve the program's stability.
