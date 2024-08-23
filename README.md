# Casino-Number-Guessing
Simple implementation of a Casino-style number guessing game in C++. The player has to guess a randomly generated number within a certain range, and the game provides feedback on whether the guess is too high or too low.
Random Number Generation:

The program generates a random number between 1 and 100 using the rand() function. The srand() function is used to seed the random number generator with the current time, ensuring that the number is different each time the game is played.
Player Input:

The player is prompted to guess the number. The player's input is stored in the variable playerGuess.
Game Loop:

The game runs in a do-while loop, where the player is repeatedly asked to guess the number until they get it right.
After each guess, the program checks whether the guess is too high, too low, or correct, and provides feedback accordingly.
Counting Attempts:

The variable numberOfTries keeps track of how many attempts the player has made to guess the number.
Ending the Game:

When the player guesses the correct number, the loop exits, and the program congratulates the player, displaying the number of attempts it took to guess correctly.
