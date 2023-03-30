#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <ctime>
using namespace std;
// to check if a number is prime
int main() {
	int p;
	cout << "What number do you want to check? ";
	cin >>p;
	if (p == 1) {
		cout << "p is unity";
		return 0;
	}
	for (int a = 2; a < p; a++) {
		if (p % a == 0) {
			cout << "The number is not a prime number";
			return 0;
		}
	}
	cout << "p is a prime";
}
