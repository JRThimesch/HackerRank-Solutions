#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> ar = { 1, 3, 2, 6, 1, 2 };
	int k = 3;
	int n = 6;
	int sum = 0;
	int divisible = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n - i; j++) {
			cout << ar[i] << " + " << ar[i + j] << endl;
			sum = ar[i] + ar [i + j];
			if ( sum % k == 0 ) {
				divisible++;
			}
		}
	}
	cout << divisible;
}
