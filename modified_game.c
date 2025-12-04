//modified game
// 1. SCORE board added
// 2. speed increases per time
// 3. 3 lives given to the player before game 
// 4. player loses life when the smiley is missed

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));

    int x = 1, v = 120, life = 3;              // player position (0 to 2)
    int step = 0;                        // smiley vertical movement
    int score = 0;
    int smileyPos = rand() % 3;   // 0,1,2 lane
	
	while(life > 0)
	{
	    while (1) {
	
	        // ---- INPUT ----
	        if (_kbhit()) {
	            char ch = getch();
	
	            if (ch == 75 && x > 0)        // LEFT arrow
	                x--;
	
	            if (ch == 77 && x < 2)        // RIGHT arrow
	                x++;
	        }
	
	        // ---- DRAW ----
	        system("cls");
	        
	        // ---- COLLISION ----
	        if (step == 10 && x != smileyPos) {
	        	life--;
	            if(life == 0)
	            {
	            	printf("\nYou Died!!\nGAME OVER!\n");
	            	break;
				}
	        }
	        
	        
	        printf("Lives left : %d\n", life);
	        printf("Your Score : %d\n", score);
	        printf("|----------|\n");
	
	        for (int i = 0; i < 10; i++) {
	            if (i == step) {
	
	                if (smileyPos == 0)
	                    printf("| %c        |\n", 1);
	
	                else if (smileyPos == 1)
	                    printf("|     %c    |\n", 1);
	
	                else if (smileyPos == 2)
	                    printf("|        %c |\n", 1);
	
	            } else {
	                printf("|          |\n");
	            }
	        }
	
	        // ---- PLAYER ----
	        if (x == 0)
	            printf("| %c        |\n", 6);
	        else if (x == 1)
	            printf("|     %c    |\n", 6);
	        else if (x == 2)
	            printf("|        %c |\n", 6);
	            
	       
	        
	
	        Sleep(v);
	        if(step == 10)
	        {
	        	if(v > 30)
	        	v = v - 10;
	        	score++;
			}
	
	        // Move smiley down
	        step++;
	
	        // Reset when reaches bottom
	        if (step > 10) {
	            step = 0;
	            smileyPos = rand() % 3; // new lane
	        }
		}
		printf("Final Score: %d\n", score);
	}
    return 0;
}
