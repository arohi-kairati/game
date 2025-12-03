ANALYSIS OF THE GAME
Game Logic:
In this game we have 3 columns and the player stays at the bottom. An obstacle comes from the top and moves down one row at a time. The player can move left or right using the arrow keys. If the obstacle reaches the bottom in the same lane as the player, then the game ends. So the main goal is just to avoid the falling obstacle.

Flow of the Program:
First the program sets some variables like the player position (x), how far the obstacle has reached in the column (step), and which lane the obstacle is in (obstaclePos). Then the game runs inside a while loop.

Inside the loop:
It checks if a key is pressed. If it’s the left arrow, the player moves left, and if it’s the right arrow, the player moves right.
It clears the screen and redraws everything again: the top line, all the empty rows, and the obstacle when its row matches step.
It draws the player at the bottom in whichever lane x is.
It checks if the obstacle and player are in the same lane when the obstacle reaches the bottom. If yes, then GAME OVER.
Then it sleeps for a short time and increases step so the obstacle falls down. If the obstacle goes past the bottom, it resets back to the top with a new random lane.

Implementation Approach:
The whole thing is done in one loop, which keeps repeating until the game is over.
It uses system("cls") to refresh the screen, which is simple but flickers.
_kbhit() and getch() are used so the user can move without pressing Enter.
rand() % 3 randomly picks where the obstacle will appear.
The code is mostly straightforward and uses basic C functions to create a simple moving game in the console.






CHANGES MADE IN THE MODIFIED VERSION
added 3 new faetures in the previous game!!

1. i added a score board, which shows the score at top and also when the game is over, it shows on the final screen
2. i added a difficulty in which speed of the obstacle falling increses with time.
3. i also added lives for the player (given 3 lives before the game over).
