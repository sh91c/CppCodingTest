#include <iostream>

using namespace std;


int main() {
	// 1. 승수 구하기
	// pow()는 반환 타입이 double 이다.
	// 그래서 정수로 반환하거나, 출력시 int로 형변환 해줘야한다.
	int n = 4;
	int result = (int)pow(2, n); // 2의 n승은?
	cout << result << "\n";

	// 2. 제곱근 구하기
	// sqrt() 또한 반환타입이 double 이라서,
	// 정수로 반환하거나 출력시 int 형변환을 해주면 된다.
	n = 16;
	result = (int)sqrt(n); // n의 제곱근은?
	cout << result << "\n";

	return 0;
}