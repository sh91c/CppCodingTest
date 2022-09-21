/*
* 1. permutation���� Ǯ��
* �ش� ���� ������ nPr �� õ���� ���� ������ Ȱ���ص� ����
* -> ������ ���� ����Լ��� �̿��� ����(combination)���� Ǯ����
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	int nan[9];

	for (int i = 0; i < 9; i++) {
		cin >> nan[i];
	}

	sort(nan, nan + 9);

	do {
		int sum = 0;

		for (int i = 0; i < 7; i++) {
			sum += nan[i];
		}

		if (sum == 100) {
			for (int i = 0; i < 7; i++) {
				cout << nan[i] << "\n";
			}
			break;
		}
	} while (next_permutation(nan, nan + 9));
}