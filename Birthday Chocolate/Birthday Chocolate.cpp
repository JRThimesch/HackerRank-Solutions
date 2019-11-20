#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> s = { 4, 5, 4, 2, 4, 5, 2, 3, 2, 1, 1, 5, 4 };
	int d = 15;
	int m = 4;
	int matches = 0;
	int sum = 0;
	
	if ( s.size() == 1 ) {
		if ( d == s[0] ) matches++;
	} else {
		for (int i = 0; i < s.size() - m + 1; i++) {
			cout << i;
			sum = s[i];
			for (int j = 1; j < m; j++ ) {
				cout << endl << " j = " << j << endl;
				cout << endl << " s[j] = " << s[j] << endl;
				sum += s[i + j];
				cout << endl << " sum = " << sum << endl;

			}
			if (sum == d) {
				matches++;
			}
			sum = 0;
		}
	}
	cout << matches;
}
