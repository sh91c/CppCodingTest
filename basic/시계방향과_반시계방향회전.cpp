#include <iostream>
#include <vector>

using namespace std;

// 리스트를 시계 또는 반시계 방향으로 회전하는 로직을 짠다면?



int main() {
	vector<int> v1, v2;
	for (int i = 1; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i);
	}

	// rotate(first, middle, last)

	// 시계 방향(-)
	rotate(v1.begin(), v1.end() - 1, v1.end()); // middle에서 v.end() - 1 또는 v.begin() + v.size() - 1 도 가능

	for (auto it = v1.begin(); it != v1.end(); ++it)
		cout << ' ' << *it;
	cout << "\n";

	// 반시계 방향(+)
	rotate(v2.begin(), v2.begin() + 1, v2.end());

	for (auto it = v2.begin(); it != v2.end(); ++it)
		cout << ' ' << *it;
	cout << "\n";
}