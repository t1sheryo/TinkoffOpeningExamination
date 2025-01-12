#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <set>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <math.h>
#include <limits>
#include <deque>

int main() {

	int a = 0, b = 0, c = 0, d = 0;
	std::cin >> a >> b >> c >> d;

	int extra = d - b;

	int spendings = 0;
	if (extra > 0) {
		spendings = a + extra * c;
	}
	else {
		spendings = a;
	}

	std::cout << spendings;

	return 0;
}
