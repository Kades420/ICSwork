#include <iostream>
using namespace std;

int main() {
	int N;
	cout << "Enter the number of prime numbers to output :   ";
	cin >> N;
	cout << "The first " << N << "Prime numbers are : \n";
	for(int i=2; N>0; ++i){
		bool isPrime = true;
		for(int j=2; j<i; ++j){
			if(i%j == 0){
				isPrime = false;
				break;
			}
		}
		if(isPrime){
			--N;
			cout << i << "\n";
		}
	}
	return 0;
}