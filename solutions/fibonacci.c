// add recursive solution
#include <stdio.h>

void nth_element();

int main() {
	int n;
	printf("Please input n: \n");
	scanf("%d", &n);
	nth_element(n);
}

void nth_element (int n){
	int x1 = 0, x2 = 1, temp, i=1;
	
	for (;;){
		if(n == i){
			printf("%d\n", x1);
			break;
		}
		temp = x2;
		x1 = x1 + x2;
		i++;
		if(n == i){
			printf("%d\n", x2);
			break;
		}
		x2 = temp + x1;
		i++;
				
	}
}
