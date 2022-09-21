#include <iostream>
#include <vector>

using namespace std;

// ����Ʈ�� �ð� �Ǵ� �ݽð� �������� ȸ���ϴ� ������ §�ٸ�?



int main() {
	vector<int> v1, v2;
	for (int i = 1; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i);
	}

	// rotate(first, middle, last)

	// �ð� ����(-)
	rotate(v1.begin(), v1.end() - 1, v1.end()); // middle���� v.end() - 1 �Ǵ� v.begin() + v.size() - 1 �� ����

	for (auto it = v1.begin(); it != v1.end(); ++it)
		cout << ' ' << *it;
	cout << "\n";

	// �ݽð� ����(+)
	rotate(v2.begin(), v2.begin() + 1, v2.end());

	for (auto it = v2.begin(); it != v2.end(); ++it)
		cout << ' ' << *it;
	cout << "\n";
}