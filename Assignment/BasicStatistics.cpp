#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "How many numbers would you like to enter?\t";
	cin >> N;
	int no;
	cout << "Enter your " << N << " numbers :\n";
	cin >> no;
	int min = no;
	int max = no;
	for(int i = 1; i < N; ++i){
		int rest;
		cin >> rest;
		no += rest;
		if(rest < min)
			min = rest;
		if(rest > max)
			max = rest;
	}
	cout << "Mean: " << (double)no/N << "\n";
	cout << "Max: " << max << "\n";
	cout << "Range: " << (max-min) << "\n";

	return 0;
}