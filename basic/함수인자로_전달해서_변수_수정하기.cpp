#include <iostream>

using namespace std;

// �� fn(x)�� ���޹��� �Ķ���͸� ������ �� �ִ� ����?

void f1(int n) {
	n = 1;
}

void f2(int& n) {
	n = 2;
}

void f3(int* n) {
	*n = 3; // �����ʹ� ���� �ÿ��� *�� ����
}

int main() {
	int n = 0;

	f1(n);
	cout << n << "\n"; // 0: ������� �ʾ���.

	f2(n);
	cout << n << "\n"; // 2: ����Ǿ���.
	
	f3(&n); // �Լ����� ����Ʈ�� ���� ���ڴ� �ּ�(&)�� �Ѱ��ش�.
	cout << n << "\n"; // 3: ����Ǿ���.

}