#include <stdio.h>

int main() {
	int bottels = 99;
	
	while (bottels > 0){
		if (bottels == 1){
			printf("1 bottle of beer on the wall, 1 bottle of beer." 
				"\nTake one down and pass it around, no more bottles of beer on the wall.\n\n");
			break;
		}
		printf("%d bottles of beer on the wall, %d bottles of beer." 
			"\nTake one down and pass it around, %d bottles of beer on the wall.\n\n", bottels, bottels, bottels-1);
		bottels--;
	}

	printf("No more bottles of beer on the wall, no more bottles of beer." 
		"\nGo to the store and buy some more, 99 bottles of beer on the wall.\n");
}
