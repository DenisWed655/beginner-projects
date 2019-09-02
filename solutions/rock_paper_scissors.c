#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int rand_i, user_i;
	char things[][10] = {"rock", "paper", "scissors"};
	
	printf("Start game Rock Paper Scissors\n");
	printf("Enter any number from 0 to 2\n");
	printf("0 - Rock\n1 - Paper\n2 - Scissors\n");
	
	for (;;){
		scanf("%d", &user_i);
		srand(time(NULL));
		rand_i = ( rand() % 3);

		printf("you: %d\ncomputer: %d\n", user_i,  rand_i);

		if (rand_i != user_i) break;
		else printf("Draw! Enter thing again\n");
	}

	if (rand_i < user_i){
		if (rand_i == 0 && user_i == 2){
			printf("You lose\n");
		} else printf("You won!!!\n");
	
	} else printf("You lose\n");
	
	return 0;
}
