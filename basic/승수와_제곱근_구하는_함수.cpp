#include <iostream>

using namespace std;


int main() {
	// 1. �¼� ���ϱ�
	// pow()�� ��ȯ Ÿ���� double �̴�.
	// �׷��� ������ ��ȯ�ϰų�, ��½� int�� ����ȯ ������Ѵ�.
	int n = 4;
	int result = (int)pow(2, n); // 2�� n����?
	cout << result << "\n";

	// 2. ������ ���ϱ�
	// sqrt() ���� ��ȯŸ���� double �̶�,
	// ������ ��ȯ�ϰų� ��½� int ����ȯ�� ���ָ� �ȴ�.
	n = 16;
	result = (int)sqrt(n); // n�� ��������?
	cout << result << "\n";

	return 0;
}