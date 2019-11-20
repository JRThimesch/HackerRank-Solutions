#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include <climits>

using namespace std;

void s(const char *ptr) {
	cout << *ptr;
}

int main()
{
	const char a[2];
	s(a);
}
