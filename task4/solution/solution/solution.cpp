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

	std::multiset<int, std::greater<int>> pluses;

	int n = 0, k = 0;
	std::cin >> n >> k;
	//std::vector<int> nums(n);
	for (size_t i = 0; i < n; ++i) {
		int num = 0;
		std::cin >> num;

		int deg = 1;
		while (num > 0) {
			int ost = num % 10;
			num /= 10;

			pluses.emplace((9 - ost) * deg);

			deg *= 10;
		}
	}

	long long res = 0;
	for (auto it = pluses.begin(); it != pluses.end(); ++it) {
		if (k <= 0) break;
		k--;
		res += *it;
	}

	std::cout << res;

	return 0;
}

