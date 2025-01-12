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

	int evenToChange = 0, oddToChange = 0;
	bool flag = true;

	int n = 0;
	std::cin >> n;
	for (size_t i = 1; i <= n; ++i) {
		int height = 0;
		std::cin >> height;

		if (i % 2 != height % 2) {
			if (height % 2 == 0) {
				if (evenToChange != 0) flag = false;
				evenToChange = height;
			}
			else {
				if (oddToChange != 0) flag = false;
				oddToChange = height;
			}
		}
	}

	if (evenToChange != 0 && oddToChange != 0 && flag) std::cout << evenToChange << " " << oddToChange;
	else std::cout << "-1 -1";

	return 0;
}

