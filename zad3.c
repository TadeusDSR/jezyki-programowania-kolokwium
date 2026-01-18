#include <stdio.h>
#include <ctype.h>

int calculate_score(const char *str) {

	int multiplier = 1;
	int sum = 0;	
	
	for(long unsigned int i = 0; i < sizeof(str); i++) {
		char current = str[i];

		if (isdigit(current)) {
			multiplier *= -1;
		} else if (islower(current)) {
			sum += current * multiplier;
		} else if (isupper(current)) {
			sum = 0;
		}
	}	

	return sum;
}

int main() {

	char array[] = {'a', 'B', '3'};
	
	printf("%d", calculate_score(array));

	return 0;
}
