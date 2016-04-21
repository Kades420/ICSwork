#include <iostream>
using namespace std;
long long acc = 1;

int main() {
	int number;
	cout << "Enter a number: ";
	cin >> number;
	if(number < 0 ){
		cout << "No negative numbers allowed!\n";
		return 1;
	}
	if(number>20)
		cout << "Program will not produce correct result!\n";
	for(; number>0; acc *= number--);
		cout << "The factorial of " << number << " is " << acc << "\n";
	return 0;
}