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

	const int maxNum = 2 * 1e9;

	int n = 0;
	std::cin >> n;

	int power = 0;
	int num = 1;
	while (num < n) {
		power++;
		num = num << 1;
	}

	std::cout << power;

	return 0;
}

