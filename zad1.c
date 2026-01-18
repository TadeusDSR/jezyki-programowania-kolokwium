#include <stdio.h>

int number_simulation(int n) {

	int count = 0;

	while (n > 10) {
		if (n % 10 >= 7) {
			n /= 2;
			printf("%d \n", n);
		} else if (n % 10 >= 4) {
			n -= 3;
			printf("%d \n", n);
		} else {
			n += n % 10 * 2;
			printf("%d \n", n);
		}
		
		count++;
	}
	
	return count;
}

int main() {

	int n;

	scanf("%d", &n);

	printf("%d", number_simulation(n));

	return 0;
}
