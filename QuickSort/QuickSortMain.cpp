#include <iostream>
#include <iomanip>
using namespace std;

template<typename aboba>
void initializeMas(aboba* mas, int size);

template<typename aboba>
void printMas(aboba* mas, int size);

template<typename aboba>
void quickSort(aboba* mas, int size); 

template<typename aboba>
void quickSort(aboba* mas, int left, int right);

int main() {
	 int size = 15;
	int* mas = new int[size];
	initializeMas(mas, size);
	printMas(mas, size);
	quickSort(mas, size);
	printMas(mas, size);
}

template<typename aboba>
void initializeMas(aboba* mas, int size)
{
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 100;
	}
}

template<typename aboba>
void printMas(aboba* mas, int size)
{
	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << setw(4) << mas[i];
	}
	cout << endl;
}

template<typename aboba>
void quickSort(aboba* mas, int size)
{
	quickSort(mas, 0, size - 1);
}

template<typename aboba>
void quickSort(aboba* mas, int left, int right)
{
	if (left >= right) {
		return;
	}
	int pivot = left + 1;
	for (int i = left + 1; i <= right; i++) {
		if (mas[i] < mas[left]) {
			swap(mas[i], mas[pivot]);
			pivot++;
		}
	}
	swap(mas[left], mas[pivot - 1]);
	printMas(mas, 15);
	quickSort(mas, left, pivot - 2);
	quickSort(mas, pivot, right);

}
