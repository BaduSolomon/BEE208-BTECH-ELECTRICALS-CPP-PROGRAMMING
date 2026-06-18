#include <iostream>
using namespace std;
int main() {
	int a,b;
	cout << "Enter value for 'a':";
	cin >> a;
	cout << "Enter value for 'b':";
	cin >> b;
	a = a^b;
	b = a^b;
	a = a^b;
	cout << "After swap:" << endl;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	return 0;
}