#include <iostream>
#include <fstream>
using namespace std;
struct Chel {
	int age;
	int rost;
	void print() {
		cout << "\nAGE: "  << this->age
			<< "\nRost: " << this->rost
			<< endl;
	}
 };
int main() {
	Chel eva = { 20,170 };
	eva.print();
	fstream fs("aboba.bin", ios::out | ios::binary);
	fs.write((char*)&eva, sizeof(eva));
	fs.close();
	fs.open("aboba.bin", ios::in | ios::binary);
	Chel adam;
	fs.read((char*)&adam, sizeof(adam));
	fs.close();
	adam.print();
}