#include <stdio.h>

int main() {

	long x = -11;
	long y = 8;

	int evenArr = count_even(x, y);
	printf("Number of the even numbers are: %d", evenArr);



	return 0;
}

long count_even(long x, long y) {
	int counter = 0;

	if (y <= x) {
		return 0;
	}

	while (x <= y) {
		if (y % 2 == 0) {
			counter++;
		}
		y--;

	}

	return counter;

}