#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter first integer and press ENTER: ";
    cin >> a;
    cout << "Enter second integer and press ENTER: ";
	cin >> b;
	cout << "Enter third integer and press ENTER: ";
	cin >> c;

    if (a == b && b == c)
        cout << "Equal";
    else
        cout << "Not equal";

    return 0;
}