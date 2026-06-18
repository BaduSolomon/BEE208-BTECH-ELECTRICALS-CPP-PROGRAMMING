#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long bin;
	int dec = 0, i = 0, rem;
	
	cout << "Enter a binary number:";
	cin >> bin;
	
	while (bin != 0) {
		rem = bin % 10;
		dec += rem * pow(2, i);
		bin /= 10;
		i++;
	}
	cout << "Decimal =" << dec;
	return 0;
}