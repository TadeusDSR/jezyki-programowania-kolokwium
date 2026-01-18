#include <stdio.h>

void matrix_transform(const int src[5][5], int dest[5][5]) {

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			int top = src[i][j+1];
			int right = src[i+1][j];
			int bot = src[i][j-1];
			int left = src[i-1][j];

			if (src[i][j] > top && src[i][j] > bot && src[i][j] > right && src[i][j] > left) {
				dest[i][j] = 1;
			} else if (src[i][j] < (top + right + bot + left) / 5) {
				dest[i][j] = -1;
			} else {
				dest[i][j] = 0;
			}
		}
	}
}

int main() {
	
	int src[5][5];
	int dest[5][5];
	
	matrix_transform(src, dest);
	
	return 0;
}
