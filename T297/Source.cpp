#include <iostream>

using namespace std;

int main() {
	const int rasmer = 10;
	int mas[rasmer];

	for (int i = 0; i < rasmer; i++) {
		mas[i] = rand() % 100;
		cout << "mas[" << i << "] = " << mas[i] << endl;
	}
	double sum = 0;
	//ѕузырькова€ сортировка
	/*
	bool isNotSorted = true;
	while (isNotSorted) {
		isNotSorted = false;
		for (int i = 0; i < rasmer - 1; i++) {
			if (mas[i] > mas[i + 1]) {
				swap(mas[i], mas[i + 1]);
				isNotSorted = true;
			}
		}
	}*/
	//сортировка выбором
	for (int i = 0; i < rasmer; i++) {
		int minIndex = i;
		for (int k = i; k < rasmer; k++) {
			if (mas[k] < mas[minIndex]) {
				minIndex = k;
			}
		}
		swap(mas[i], mas[minIndex]);
	}
	cout << sum ;
}