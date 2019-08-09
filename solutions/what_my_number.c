#include <stdio.h>


int size_array(int array[]);
int prime(int num);

int prime (int num){
	if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 || num % 9 == 0){
		return 0;
	} else {
		return 1;
	}
}


int main() {
	
	int all_numbers[1000];
	int sizeArray, i = 0;	
	for (i = 10; i <= 1000; i++){
		all_numbers[i] = i;
	}

	sizeArray = sizeof(all_numbers)/sizeof(int);

	for (i = 0; i < sizeArray; i++){
		if (prime(all_numbers[i])){
			all_numbers[i] = 0;	
		}
		printf("%d\n", all_numbers[i]);
	}	

	
}

