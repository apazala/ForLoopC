#include <stdio.h>

char numwords[10][10] = {"zip", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int i;
	for (i = a; i <= b; i++) {
		if (i <= 9) {
			printf("%s\n", numwords[i]);
		}
		else if(i%2==0){
			printf("even\n");
		}
		else {
			printf("odd\n");
		}
			
	}

	return 0;
}