/*
	2. 조합으로 풀기
	-> 내가 풀 땐 조합 - 재귀함수로 풀었지만
	nCr == nCn-r 로도 풀어보자.
	9C7 == 9C2
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

pair<int, int> p;

void calc(int& sum, int arr[]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < i; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				p = { arr[i], arr[j] }; // pair에 2개의 값을 담고 제어권 반환
				// 값 대신 인덱스로 넘긴다면
				// p = {i, j};
				return;
			}
		}
	}
}

int main(void) {
	int nan[9];
	int sum = 0;
	vector<int> solve;

	// 전체 합을 구해야하기 때문에 입력받는q 9개 값을 전부 더함
	for (int i = 0; i < 9; i++) {
		cin >> nan[i];
		sum += nan[i];
	}

	// 로직
	calc(sum, nan);

	for (int i = 0; i < 9; i++) {
		// pair에 담긴 값이 nan 배열에 있다면, continue로 인해 solve.push_back() 하지 않고
		// 다음 인덱스로 증가함.
		// 없다면 solve 배열에 값 추가
		if (p.first == nan[i] || p.second == nan[i]) continue;
		// 값 대신 인덱스 번호로 비교하려면
		// if(p.fisrt = i || p.second == i) continue;
		solve.push_back(nan[i]);
	}

	sort(solve.begin(), solve.end());

	for (auto it : solve) cout << it << "\n";
}