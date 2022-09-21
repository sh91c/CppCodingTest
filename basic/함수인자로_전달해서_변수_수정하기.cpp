#include <iostream>

using namespace std;

// 각 fn(x)에 전달받은 파라미터를 변경할 수 있는 경우는?

void f1(int n) {
	n = 1;
}

void f2(int& n) {
	n = 2;
}

void f3(int* n) {
	*n = 3; // 포인터는 변경 시에도 *를 붙임
}

int main() {
	int n = 0;

	f1(n);
	cout << n << "\n"; // 0: 변경되지 않았음.

	f2(n);
	cout << n << "\n"; // 2: 변경되었음.
	
	f3(&n); // 함수에서 포인트로 받을 인자는 주소(&)로 넘겨준다.
	cout << n << "\n"; // 3: 변경되었음.

}