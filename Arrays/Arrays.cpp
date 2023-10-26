#include <iostream>
using namespace std;

void inicializeMas(int* mas, const int size) {
	for (int i = 0; i < size; i++) {
		mas[i] = rand() % 100;
	}
}
void printMas(int* mas, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << "mas[" << i << "] = " << mas[i] << endl;
	}
}
void printMasLine(int* mas, const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;
}
void insertionSort(int* mas, const int size) {
	for (int i = 0; i < size-1; i++)
	{
		int indexMin = i;
		for (int k = i+1; k < size; k++)
		{
			if (mas[k] < mas[indexMin]) {
				indexMin = k;
			}
		}
		swap(mas[i], mas[indexMin]);
		printMasLine(mas, size);
	}
}
int main() {

	//Размер массива
	int size = 8;
	//указатель
	int* mas = new int[size] {44, 34, 65, 34, 78, 12, 43, 65};
	cout << mas << endl;;
	//inicializeMas(mas, size);
	printMas(mas, size);
	insertionSort(mas, size);
	printMas(mas, size);
	delete[] mas;
}