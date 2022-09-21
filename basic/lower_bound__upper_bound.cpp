#include <iostream>
#include <vector>

using namespace std;

// 코딩테스트에 자주 나오며 꼭 알아야 하는 로직.

// 정렬된 배열에서 어떤 값이 나오는 지점이나, 어떤 값이 나오기 전의 위치를 반환하려면 어떻게 해야할까?
// 또는 이분탐색을 쉽게 함수로 구현하려면 어떻게 해야할까?

// 이를 위한 lower_bound()와 upper_bound()를 활용한다.

int main() {
	vector<int> v;
	int a[5] = { 1,2,2,2,3 };

	for (int i = 0; i < 5; i++)
		v.push_back(a[i]);

	int x = 2;

	// 여기는 벡터를 활용

	// c 변수 설명
	// upper bound를 통해 벡터 뒤에서부터 값 2를 찾는다. 발견했다면 '그 전의 값'인 3의 '인덱스 위치'을 반환한다. => 4
	// 그리고 lower bound를 통해 벡터 앞에서부터 값 2를 찾는다. 발견했다면 '해당 인덱스의 위치'를 반환한다. => 1
	// 그래서 정수 2의 개수는 4 - 1 = 3개임을 알 수 있다.
	int c = (int)(upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x));

	// lower bound를 통해 정수 2가 시작되는 인덱스를 구할 수 있다.
	// 해당 함수를 통해 반환되는 데이터타입은 iterator기 때문에 벡터의 처음 주소값인 v.begin()으로 빼주면 된다. (배열도 똑같음)
	// 그래서 시작 인덱스는 1인 것을 구할 수 있다.
	int f = (int)(lower_bound(v.begin(), v.end(), x) - v.begin());

	// upper bound를 통해 정수 2가 끝나는 인덱스를 구할 수 있다.
	// 똑같이 이터레이터가 반환되므로 처음 주소값을 빼주면 된다. (배열 동일)
	// 그래서 정수 2가 끝나는 인덱스는 4인 것을 구할 수 있다.
	int t = (int)(upper_bound(v.begin(), v.end(), x) - v.begin());

	// 해당 인덱스의 값을 반환하려면 포인터를 사용한다.
	// 가령 lower bound로 시작되는 점의 값을 찾는다면 정수 2가 나올 것.
	int f2 = *lower_bound(v.begin(), v.end(), x);
	// upper bound로는 정수 3이 나올 것이다.
	int t2 = *upper_bound(v.begin(), v.end(), x);

	printf("%d의 개수: %d, 시작되는 점: %d, 끝나는 점: %d\n", x, c, f, t);
	printf("lower bound가 시작되는 점의 값: %d, upper bound가 시작되는 점의 값: %d\n", f2, t2);

	// 여기는 배열을 활용 (위의 설명과 똑같이 동작한다.)
	c = (int) (upper_bound(a, a + 5, x) - lower_bound(a, a + 5, x));
	f = (int) (lower_bound(a, a + 5, x) - a);
	t = (int) (upper_bound(a, a + 5, x) - a);
	f2 = *lower_bound(a, a + 5, x);
	t2 = *upper_bound(a, a + 5, x);

	printf("%d의 개수: %d, 시작되는 점: %d, 끝나는 점: %d", x, c, f, t);
	printf("lower bound가 시작되는 점의 값: %d, upper bound가 시작되는 점의 값: %d\n", f2, t2);

	return 0;
}