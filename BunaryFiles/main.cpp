#include <iostream>
#include "BinaryFiles.h"
using namespace std;

struct Chel
{
	int age;
	int rost;
	 void print() {
		cout << "AGE: " << this->age
			<< "\nRost: " << this->rost
			<< endl;
	}
};
struct Student 
{
	int age;
	int rost;
	int ocenka;
	void print() {
		cout << "AGE: " << this->age
			<< "\nRost: " << this->rost
			<<"\nOcenka: " << this->ocenka
			<< endl;
	}
};

int main() {
	Chel eva = { 2430,123470 };
	BinaryFiles bf("aboba.bin");

	bf.write(eva);
	Student adam = { 053,230,1054ï };
	bf.writeApp(adam);
	Chel eva1;
	Student adam1;
	bf.read(eva1);
	bf.read(adam1);
	
	cout << "EVA:";
	eva1.print();
	cout << "ADAM:";
	adam1.print();

}