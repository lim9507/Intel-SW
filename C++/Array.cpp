#include <iostream>
using namespace std;

class ArrayReckoning {
	int* array;			// 배열을 저장할 포인터
	int size;

public:
	// 생성자 - 배열 초기화, 크기 설정
	ArrayReckoning(int* arr, int s) : array(arr), size(s) {}
	// 배열 합의 함수
	int reckoningSum() {
		int i;
		int sum = 0;
		for (i = 0; i < size; i++) {
			sum += array[i];
		}
		return sum;
	}

	// 배열 평균의 함수
	double reckoningAverage() {
		int sum = reckoningSum();
		return static_cast<double>(sum) / size;
	}
};

int main() {
	int exArray[] = { 3, 6, 9, 12, 15 };

	ArrayReckoning arrayReck(exArray, sizeof(exArray) / sizeof(exArray[0]));

	cout << "Sum : " << arrayReck.reckoningSum() << endl;
	printf("Sum : %d\n", arrayReck.reckoningSum());
	cout << "Average : " << arrayReck.reckoningAverage() << endl;
	printf("Average : %.f\n", arrayReck.reckoningAverage());

	return 0;
}