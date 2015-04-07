#include <iostream>

using namespace std;

//Is a a multiple of b
bool IsMult(int a, int b) {
	return 0 == a % b;
}

int main() {
	for(int i = 1; i <= 100; i++) {
		if(IsMult(i, 3)) {
			cout << "Fizz";
			if (IsMult(i, 5)) {
				cout << "Buzz";
			}
		} else {
			if (IsMult(i, 5)) {
				cout << "Buzz";
			} else {
				cout << i;
			}
		}
		cout << endl;
	}
	return 0;
}
