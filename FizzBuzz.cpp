#include <iostream>

using namespace std;

int main() {
	for(int i = 1; i <= 100; i++) {
		if(0 == i%3) {
			cout << "Fizz";
			if (0 == i%5) {
				cout << "Buzz";
			}
		} else {
			if (0 == i%5) {
				cout << "Buzz";
			} else {
				cout << i;
			}
		}
		cout << endl;
	}
	return 0;
}