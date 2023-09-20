#define _USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
using namespace std;
double fact(int n) {
	double result = 1;
	for (int i = 1; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	
	double eps = pow(10, -8);
	cout << "----------------------------" << endl
		<< "|     x    |       y       |" << endl
		<< "---------------------------\n";
	for (double x = -M_PI; x <= M_PI; x += (M_PI / 10)) {
		double ySumm = 0;
		for (int n = 0, pred = 0; 1; n++) {
			double tek =  pow(-1, n) * pow(x, 2 * n) / fact(2 * n);
			ySumm += tek;
			if (abs(abs(pred) - abs(tek)) < eps) {
				break;
			}
			pred = tek;
		}
		cout << "|" << setw(10) << x
			<< "|" << setw(15) << ySumm << "|\n";
	}
	cout <<  "---------------------------\n";
}