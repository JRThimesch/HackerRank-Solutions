#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> scores = { 3, 4, 21, 36, 10, 28, 35, 5, 24, 42 };
	vector<int> changes (2, 0);
	int low = scores[0];
	int high = scores[0];
	for (int i = 1; i < scores.size(); i++) {
		if ( scores[i] > high ) {
			high = scores[i];
			changes[0]++;
		} else if ( scores[i] < low ) {
			low = scores[i];
			changes[1]++;
		}



	}
	cout << high << "  " << low << endl;
	cout << changes [0] << "  " << changes[1] << endl;
	//return changes;
}
