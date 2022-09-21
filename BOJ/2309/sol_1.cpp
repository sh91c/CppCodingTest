/*
* 1. permutation으로 풀기
* 해당 유형 문제의 nPr 이 천만을 넘지 않으면 활용해도 무방
* -> 나같은 경우는 재귀함수를 이용해 조합(combination)으로 풀었음
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int nan[9];

	for (int i = 0; i < 9; i++) {
		cin >> nan[i];
	}

	sort(nan, nan + 9);

	do {
		int sum = 0;

		for (int i = 0; i < 7; i++) {
			sum += nan[i];
		}

		if (sum == 100) {
			for (int i = 0; i < 7; i++) {
				cout << nan[i] << "\n";
			}
			break;
		}
	} while (next_permutation(nan, nan + 9));
}