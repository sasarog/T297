#include <iostream>
#include <regex>
using namespace std;

int main() {
	string eva = "+375291234567";
	regex blrNumer("^\\+375(29|44|33|25|17)\\d{7}$");
	if (regex_match(eva, blrNumer)) {
		cout << "+";
	}
	else {
		cout << "-";
	}
}