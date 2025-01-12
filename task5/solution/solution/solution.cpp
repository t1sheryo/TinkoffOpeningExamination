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

	int l = 0, r = 0;
	std::cin >> l >> r;

	int digitsL = 0, digitsR = 0;
	int copyL = l, copyR = r;
	while (copyL > 0) {
		digitsL++;
		copyL /= 10;
	}

	while (copyR > 0) {
		digitsR++;
		copyR /= 10;
	}

	long long count = 0;
	for (int i = 1; i < 10; ++i) {
		long long minNum = 0, maxNum = 0;
		int copyDigitsL = digitsL, copyDigitsR = digitsR;

		while (copyDigitsL > 0) {
			minNum = minNum * 10 + i;
			copyDigitsL--;
		}
		while (copyDigitsR > 0) {
			maxNum = maxNum * 10 + i;
			copyDigitsR--;
		}

		int curCount = 0;
		minNum >= l ? curCount++ : 0;
		maxNum <= r ? curCount++ : 0;
		curCount += (digitsR - digitsL - 1);

		count += curCount;
	}

	std::cout << count;

	return 0;
}

