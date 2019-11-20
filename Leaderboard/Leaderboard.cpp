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

	int ranked = 10;

	auto rankThese = []( vector<int> s, int ranked, vector<int> ranks_){
		auto itr = lower_bound( begin(s), end(s), ranked, greater<int>() );
		ranks_.push_back( distance( begin(s), itr ) + 1 );
	};

	rankThese( scores, ranked, ranks );


	for ( int i = 0; i < ranks.size(); i++ ) {
		cout << ranks[i] << endl;
	}

}
