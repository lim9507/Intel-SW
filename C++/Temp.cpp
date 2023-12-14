#include <iostream>
using namespace std;

template <typename T, int size>
T Max(T(&arr)[size]) {
	T maxVal = arr[0];

	for (int i = 0; i < size; i++) {
		if (arr[i] > maxVal) {
			maxVal = arr[i];
		}
	}

	return maxVal;
}

int main() {
	int intArray[] = { 1, 3, 5, 7, 9 };
	int maxint = Max(intArray);

	cout << "intMaxValue : " << maxint << endl;
	printf("intMaxValue : %d\n", maxint);

	double doubArray[] = { 1.3, 2.7, 4.9, 6.2, 8.5 };
	double maxdoub = Max(doubArray);

	cout << "doubMaxValue : " << maxdoub << endl;
	printf("doubMaxValue : %.1f\n", maxdoub);

	return 0;
}