#include <iostream>
#include <vector>

using namespace std;

// lower �� upper bound�� �̺�Ž������ ����� �� ����.

/*
* ���ͷ����Ϳ� end()
* ���ͷ����ʹ� STL(���Ĵٵ� ���ø� ���̺귯��)���� �����͵��� ����Ű�� ��������.
* begin()�� �ش� ����Ʈ�� ó�� ����� �ּҰ��� ����Ű��,
* end()�� ������ ��Һ��� ��ĭ ���� �ּҰ��� ����Ŵ.
* 
* v[i] != v.end() ��� �ڵ�� ����Ʈ�� �� ��ȸ�ϰ� ����Ʈ�� ���� �����ߴٴ� ���� ����Ŵ.
*/


int main() {
	// ���� 1.
	// 4�� ã������ �ϴ� 3�� ��ȯ�ϴ� ���� �� �� ����.
	vector<int> v1;
	for (int i = 1; i <= 3; i++) v1.push_back(i); // 1, 2, 3
	for (int i = 5; i <= 10; i++) v1.push_back(i); // 1, 2, 3, 5, 6, 7, 8, 9, 10

	// ���� 5�� ����Ű�� 3�� �ε����� ��µȴ�.. ��, 4�� ���ٸ� 4�� �̻��� ù ��° �ε����� ��ȯ..
	cout << lower_bound(v1.begin(), v1.end(), 4) - v1.begin() << "\n";

	cout << "----------------------------------------" << "\n";

	vector<int> v2;
	for (int i = 2; i <= 5; i++) v2.push_back(i); // 2, 3, 4, 5
	v2.push_back(7); // 2, 3, 4, 5, 7

	// ���� ��ã���� ��� �Ʒ� ����� ��ȯ�ϰ� �Ǵµ�,
	// ���� ���ٸ� �� �ٹ��������� ��ȯ�ϰ� �ȴ�.
	// ���� �̺�Ž���� ����� �̿� ����ϰ� ��µȴ�.

	cout << upper_bound(v2.begin(), v2.end(), 6) - v2.begin() << " �� �ε���\n"; // 4
	cout << lower_bound(v2.begin(), v2.end(), 6) - v2.begin() << " �� �ε���\n"; // 4
	cout << upper_bound(v2.begin(), v2.end(), 9) - v2.begin() << " �� �ε���\n"; // 5
	cout << lower_bound(v2.begin(), v2.end(), 9) - v2.begin() << " �� �ε���\n"; // 5
	cout << upper_bound(v2.begin(), v2.end(), 0) - v2.begin() << " �� �ε���\n"; // 0
	cout << lower_bound(v2.begin(), v2.end(), 0) - v2.begin() << " �� �ε���\n"; // 0

	return 0;
}