#include <stdio.h>
#include <stdbool.h>

//bool is_odd_palindrome(const char* str);

void str_div_by_digit(const char* num, int digit);

int main() {

	long x = -11;
	long y = 8;

	const int arr[] = {1,2,3,3,4};
	int n = 5;

	const char str[] = "abcba";


	int evenArr = count_even(x, y);
	printf("Number of the even numbers are: %d\n", evenArr);

	int mostFrequentNum = most_frequent(arr, n);
	printf("The most frequent number is: %d\n", mostFrequentNum);

	//longest_odd_subpalindrome(str);

	const char* num = "15";
	int digit = 5;
	str_div_by_digit(num, digit);

	return 0;
}

void str_div_by_digit(const char* num, int digit) {

	
	int numOfStr = atoi(num);
	int quotient = numOfStr / digit;
	int remainder = numOfStr % digit;



	printf("%d R %d", quotient, remainder);
	return;
}

//int longest_odd_subpalindrome(const char* str) {
//	int length = strlen(str);
//	int reverseCounter = length;
//	int palindromeCounter = 0;
//
//
//	for (int i = 0; i < length; i++) {
//		for (int j = i; j < length; j++) {
//			if (is_odd_palindrome(str,i,j)) {
//				return 1;
//			}
//			
//		}
//	}
//}

//bool is_odd_palindrome(const char* str, int lowestNum,int highestNum) {
//	int length = strlen(str);
//
//
//	if (length % 2 == 0) {
//		return false;
//	}
//	while (lowestNum < highestNum) {
//		if (str[lowestNum] != str[highestNum]) {
//			return false;
//		}
//		lowestNum++;
//		highestNum--;
//	}
//	return true;
//
//}


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