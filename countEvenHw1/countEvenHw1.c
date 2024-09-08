#include <stdio.h>

int main() {

	long x = -11;
	long y = 8;

	const int arr[] = {1,2,3,4,1};
	int n = 5;

	int evenArr = count_even(x, y);
	printf("Number of the even numbers are: %d", evenArr);

	int mostFrequentNum = most_frequent(arr, n);
	printf("The most frequent number is: %d", mostFrequentNum);

	return 0;
}



int most_frequent(const int* arr, int n) {

	int result = 0;
	int maxCounter = 0;

	for (int i = 0; i < n; i++) {
		int counter = 0;

		for (int j = 0; j < n; j++) {
			if (arr[i] == arr[j]) {
				counter++;
			}
		}

		if (maxCounter < counter) {
			maxCounter = counter;
			result = arr[i];
		}

	}


	return result;
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