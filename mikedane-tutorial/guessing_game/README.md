# Building A Guessing Game #

We will use a mixture of while loops, if statements, comparison operators and user inputs to create a basic guessing game.

In this guessing game the user will have to guess what the secret number is.  They will have 3x attempts to guess the correct secret number before the game ends.

We have set a `guessLimit` variable which dictates how many attempts the user will have, and we also have a `guessCount` variable which will count how many attempts the user has guessed the number.  Everytime the user makes an attemp to guess the number, we will increment the `guessCount` variable by 1.

There is also a variable called `outOfGuesses` which is a boolean type, and will be set to `false` as a default.  When the user is out of guesses the variable will be set to `true`; the if statement is then modified so that if the user guesses the correct name, or is out of guesses, then they will break out of the while loop and will be told if they won or lost the game!
