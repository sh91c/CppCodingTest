#include <iostream>

using namespace std;

bool check(int n) {
	// 14�� ���α��� �Ҽ����� Ȯ���ϴ� ���ǹ� ����
	// 0 : false, �ش� ���� �Ҽ��� �ƴ�. 1: true, �ش� ���� �Ҽ��� ����.
	if (n <= 1) return 0; // 0�� 1�� �Ҽ��� �� �� ����.
	if (n == 2) return 1; // 2�� ������ �Ҽ�.
	if (n % 2 == 0) return 0; // �������� 0�̶�� �Ҽ��� �ƴ�.

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0; // �������� 0�̶�� �Ҽ��� �ƴ�.
	}
	
	return 1;
}

int main() {
	for (int i = 1; i <= 2000; i++) {
		if (check(i)) cout << i << "��(��) �Ҽ� �Դϴ�." << "\n";
	}
	
	return 0;
}