#include <iostream>
#include <vector>
#include <numeric> // accumulate
#include <algorithm> // max_element, min_element

using namespace std;

int main() {
	vector<int> v;

	for (int i = 1; i <= 10; i++) v.push_back(i);

	// 배열의 합 : accumulate()
	// 세 번째 인자는 합의 초기값을 0으로 한다는 말인데,
	// 0으로 하면 int형, 0LL을 하면 int 범위 이상 표현할 수 있다. (long long 타입)
	cout << accumulate(v.begin(), v.end(), 0) << "\n";

	// 배열의 요소 중 가장 큰 요소(*값)을 반환하는 함수 : *max_element(시작 인덱스, 마지막 인덱스)
	cout << "가장 큰 수는?" << * max_element(v.begin(), v.end()) << "\n";

	// 배열의 요소 중 가장 작은 요소(*값)을 반환하는 함수 : *min_element(시작 인덱스, 마지막 인덱스)
	cout << "가장 작은 수는?" << * min_element(v.begin(), v.end()) << "\n";

	return 0;
}