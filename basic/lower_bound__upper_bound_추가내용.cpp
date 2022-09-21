#include <iostream>
#include <vector>

using namespace std;

// lower 및 upper bound는 이분탐색에도 사용이 될 예정.

/*
* 이터레이터와 end()
* 이터레이터는 STL(스탠다드 템플릿 라이브러리)안의 데이터들을 가리키는 포인터임.
* begin()은 해당 리스트의 처음 요소의 주소값을 가리키고,
* end()는 마지막 요소보다 한칸 뒤의 주소값을 가리킴.
* 
* v[i] != v.end() 라는 코드는 리스트를 다 순회하고 리스트의 끝에 도착했다는 것을 가리킴.
*/


int main() {
	// 예제 1.
	// 4를 찾으려고 하니 3을 반환하는 것을 볼 수 있음.
	vector<int> v1;
	for (int i = 1; i <= 3; i++) v1.push_back(i); // 1, 2, 3
	for (int i = 5; i <= 10; i++) v1.push_back(i); // 1, 2, 3, 5, 6, 7, 8, 9, 10

	// 정수 5를 가리키는 3번 인덱스로 출력된다.. 즉, 4가 없다면 4의 이상인 첫 번째 인덱스를 반환..
	cout << lower_bound(v1.begin(), v1.end(), 4) - v1.begin() << "\n";

	cout << "----------------------------------------" << "\n";

	vector<int> v2;
	for (int i = 2; i <= 5; i++) v2.push_back(i); // 2, 3, 4, 5
	v2.push_back(7); // 2, 3, 4, 5, 7

	// 만약 못찾았을 경우 아래 결과를 반환하게 되는데,
	// 값이 없다면 그 근방지점으로 반환하게 된다.
	// 추후 이분탐색의 결과도 이와 비슷하게 출력된다.

	cout << upper_bound(v2.begin(), v2.end(), 6) - v2.begin() << " 번 인덱스\n"; // 4
	cout << lower_bound(v2.begin(), v2.end(), 6) - v2.begin() << " 번 인덱스\n"; // 4
	cout << upper_bound(v2.begin(), v2.end(), 9) - v2.begin() << " 번 인덱스\n"; // 5
	cout << lower_bound(v2.begin(), v2.end(), 9) - v2.begin() << " 번 인덱스\n"; // 5
	cout << upper_bound(v2.begin(), v2.end(), 0) - v2.begin() << " 번 인덱스\n"; // 0
	cout << lower_bound(v2.begin(), v2.end(), 0) - v2.begin() << " 번 인덱스\n"; // 0

	return 0;
}