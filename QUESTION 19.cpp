#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
	string binary;
	int decimal = 0;
	
	cout << "Enter binary number:";
	cin >> binary;
	for (char bit : binary) {decimal = decimal * 2 + (bit - '0');
	}
	cout << "Decimal:" << decimal << endl;
	cout << "Hexadecimal:" << hex << decimal << endl;
	cout << "Octal:" << oct << decimal << endl;
	return 0;
}