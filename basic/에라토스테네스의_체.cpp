#include <iostream>

using namespace std;

bool check(int n) {
	// 14번 라인까지 소수인지 확인하는 조건문 실행
	// 0 : false, 해당 수는 소수가 아님. 1: true, 해당 수는 소수가 맞음.
	if (n <= 1) return 0; // 0과 1은 소수가 될 수 없음.
	if (n == 2) return 1; // 2는 무조건 소수.
	if (n % 2 == 0) return 0; // 나머지가 0이라면 소수가 아님.

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0; // 나머지가 0이라면 소수가 아님.
	}
	
	return 1;
}

int main() {
	for (int i = 1; i <= 2000; i++) {
		if (check(i)) cout << i << "은(는) 소수 입니다." << "\n";
	}
	
	return 0;
}