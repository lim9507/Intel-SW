#include <iostream>
using namespace std;

class ArrayReckoning {
	int* array;			// �迭�� ������ ������
	int size;

public:
	// ������ - �迭 �ʱ�ȭ, ũ�� ����
	ArrayReckoning(int* arr, int s) : array(arr), size(s) {}
	// �迭 ���� �Լ�
	int reckoningSum() {
		int i;
		int sum = 0;
		for (i = 0; i < size; i++) {
			sum += array[i];
		}
		return sum;
	}

	// �迭 ����� �Լ�
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