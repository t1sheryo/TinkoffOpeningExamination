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

	int n = 0, t = 0;
	std::cin >> n >> t;
	std::vector<int> levels(n);
	for (size_t i = 0; i < n; ++i) {
		std::cin >> levels[i];
	}
	int leavingLevel = 0;
	std::cin >> leavingLevel;

	int timeNeeded = 0;
	if (levels[leavingLevel - 1] - levels[0] <= t || levels[n - 1] - levels[leavingLevel - 1] <= t) {
		timeNeeded = levels[n - 1] - levels[0];
	}
	else {
		bool up = true;
		if (levels[leavingLevel - 1] - levels[0] < levels[n - 1] - levels[leavingLevel - 1]) up = false;

		if(up) timeNeeded = levels[n - 1] - levels[leavingLevel - 1] + levels[n - 1] - levels[0];
		else timeNeeded = levels[leavingLevel - 1] - levels[0] + levels[n - 1] - levels[0];
	}

	std::cout << timeNeeded;

	return 0;
}

