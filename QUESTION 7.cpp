#include <iostream>
#include <string>
using namespace std;
int main() {
	string text;
	cout << "Enter a string:";
	cin >> text;
	if (text.find ('a')!= string::npos)
	cout << "Contain 'a'" <<endl;
	else
	cout << "Does not contain 'a'";
	return 0;
}