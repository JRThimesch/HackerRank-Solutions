#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> scores = { 100, 100, 50, 40, 40, 20, 10 };
	vector<int> alice = { 5, 25, 50, 120 };
	vector<int> ranks = {};

	sort( begin(scores), end(scores), greater<int>() );
	scores.erase( unique( scores.begin(), scores.end() ), scores.end() );

	auto rankThese = []( vector<int> s, int newScore ){
		auto itr = lower_bound( begin(s), end(s), newScore, greater<int>() );
		return distance( begin(s), itr ) + 1;
	};

	for ( auto newScore:alice ) {
		ranks.push_back( rankThese( scores, newScore ) );
	}

	for ( int i = 0; i < ranks.size(); i++ ) {
		cout << ranks[i] << endl;
	}

}
