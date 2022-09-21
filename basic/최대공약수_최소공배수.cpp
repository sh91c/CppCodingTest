#include <iostream>
#include <vector>

using namespace std;

// 최대공약수 GCD : Greatest Common Divisor
// 두 수 a, b를 입력받는다.
// a가 0이라면 b를 리턴.
// 아니라면, 재귀함수로 a 자리에 b % a, b 자리에 a를 매개변수로 돌린다.
// 그럼 최대공약수가 나온다.
int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

// 최소공배수 LCM : Least Common Multiple
// 공식 : (a * b) / a와 b의 최대공약수
int lcm(int a, int b) {
	return (a * b) / gcd(a, b);
}

int main() {
	int a = 24, b = 36;
	cout << a << "와 " << b << "의 최대공약수: " << gcd(a, b) << "\n";
	cout << a << "와 " << b << "의 최소공배수: " << lcm(a, b) << "\n";

	return 0;
}