#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <climits>
#include <string>

using namespace std;

// Complete the isValid function below.
int main() {
	string s = "aaaaabc";
	vector<int> counts = {};
	vector<vector<int>> occurences = {{}};

	for (char i = 'a'; i <= 'z'; ++i) {
		if (count(s.begin(), s.end(), i) > 0) {
			counts.push_back(count(s.begin(), s.end(), i));
		}
	}

	sort(counts.begin(), counts.end());

	for ( int n = 0; n < counts.size(); n++) {
		cout << counts[n] << ", ";
	}

	int k = 0;
	for (int j = 0; j < counts.size(); j++) {
		if ( j == 0 ) {
			occurences[k].push_back(counts[j]);
		}
		else if (counts[j] == occurences[k][0]) {
			occurences[k].push_back(counts[j]);
		} else {
			occurences.push_back( vector<int>() );
			k++;
			occurences[k].push_back( counts[j] );
		}
	}

	cout << "{ ";
	for (int m = 0; m < occurences.size(); m++) {
		cout << "[ ";
		for (int l = 0; l < occurences[m].size(); l++) {
			cout << occurences[m][l] << ", ";
		}
		cout << "], ";
	}
	cout << "}";

	if (occurences.size() == 1) {
		cout << "YES";
	}
	else if (occurences.size() == 2) {
		if (occurences[0].size() == 1 || occurences[1].size() == 1) {
			if (abs(occurences[0][0] - occurences[1][0]) == 1)  {
				cout <<  "YES";
			}
			else {
				if ( occurences[0][0] == 1 || occurences[1][0] == 1 ) {
					cout << "YES";
				}
				else {
					cout <<  "NO";
				}
			}
		}
		else {
			cout <<  "NO";
		}
	}
	else {
		cout <<  "NO";
	}
}
