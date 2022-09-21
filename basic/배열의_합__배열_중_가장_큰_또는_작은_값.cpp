#include <iostream>
#include <vector>
#include <numeric> // accumulate
#include <algorithm> // max_element, min_element

using namespace std;

int main() {
	vector<int> v;

	for (int i = 1; i <= 10; i++) v.push_back(i);

	// �迭�� �� : accumulate()
	// �� ��° ���ڴ� ���� �ʱⰪ�� 0���� �Ѵٴ� ���ε�,
	// 0���� �ϸ� int��, 0LL�� �ϸ� int ���� �̻� ǥ���� �� �ִ�. (long long Ÿ��)
	cout << accumulate(v.begin(), v.end(), 0) << "\n";

	// �迭�� ��� �� ���� ū ���(*��)�� ��ȯ�ϴ� �Լ� : *max_element(���� �ε���, ������ �ε���)
	cout << "���� ū ����?" << * max_element(v.begin(), v.end()) << "\n";

	// �迭�� ��� �� ���� ���� ���(*��)�� ��ȯ�ϴ� �Լ� : *min_element(���� �ε���, ������ �ε���)
	cout << "���� ���� ����?" << * min_element(v.begin(), v.end()) << "\n";

	return 0;
}