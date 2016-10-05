/* matchstick game 
Write a program for a matchstick game being played between
the computer and a user. Your program should ensure that the
computer always wins. Rules for the game are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4
matchsticks.
− After the person picks, the computer does its
picking.
− Whoever is forced to pick up the last matchstick
loses the game.
*/

#include <stdio.h> 
void main()
{
	int player, pc, start, rest, sum; 
	rest = 21; 
	sum = 5;
	player = 0;
	pc = 0;
	printf("we have 21 matchstick, we can pick 1,2,3,4 matchsticks\n");
	printf("who pick the last matchstick is the loses\n");
	printf("you pick first\n");

	for(rest = 21; rest > 0; )
	{ 
		rest = rest - pc - player; 
		printf("we have: %d\n",rest);
//		printf("please take 1,2,3 or 4 matchstick\n");
		printf("you take:"); 
		scanf("%d",&player);
		while(player < 1 || player > 4 || player > rest) 
		{
			if( player < 1 || player > 4 )
			{	
				printf("sorry, you must choose 1,2,3 or 4 matchsticks \n");
				printf("you take:"); 
				scanf("%d",&player);
			}

			else // if (player > rest) 
			{
				printf("sorry, you must choose less than or equal to %d matchsticks \n", rest);
				printf("you take:"); 
				scanf("%d",&player);
			}
		}
		if(rest == 1 && player == 1)
			break;
		pc = sum - player;
		printf("pc take: %d \n",sum - player);
	}	

	printf("tada, you pick the last one. sorry, you loses!\n");
}