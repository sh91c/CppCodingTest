#include <iostream>
#include <vector>

using namespace std;

// �ڵ��׽�Ʈ�� ���� ������ �� �˾ƾ� �ϴ� ����.

// ���ĵ� �迭���� � ���� ������ �����̳�, � ���� ������ ���� ��ġ�� ��ȯ�Ϸ��� ��� �ؾ��ұ�?
// �Ǵ� �̺�Ž���� ���� �Լ��� �����Ϸ��� ��� �ؾ��ұ�?

// �̸� ���� lower_bound()�� upper_bound()�� Ȱ���Ѵ�.

int main() {
	vector<int> v;
	int a[5] = { 1,2,2,2,3 };

	for (int i = 0; i < 5; i++)
		v.push_back(a[i]);

	int x = 2;

	// ����� ���͸� Ȱ��

	// c ���� ����
	// upper bound�� ���� ���� �ڿ������� �� 2�� ã�´�. �߰��ߴٸ� '�� ���� ��'�� 3�� '�ε��� ��ġ'�� ��ȯ�Ѵ�. => 4
	// �׸��� lower bound�� ���� ���� �տ������� �� 2�� ã�´�. �߰��ߴٸ� '�ش� �ε����� ��ġ'�� ��ȯ�Ѵ�. => 1
	// �׷��� ���� 2�� ������ 4 - 1 = 3������ �� �� �ִ�.
	int c = (int)(upper_bound(v.begin(), v.end(), x) - lower_bound(v.begin(), v.end(), x));

	// lower bound�� ���� ���� 2�� ���۵Ǵ� �ε����� ���� �� �ִ�.
	// �ش� �Լ��� ���� ��ȯ�Ǵ� ������Ÿ���� iterator�� ������ ������ ó�� �ּҰ��� v.begin()���� ���ָ� �ȴ�. (�迭�� �Ȱ���)
	// �׷��� ���� �ε����� 1�� ���� ���� �� �ִ�.
	int f = (int)(lower_bound(v.begin(), v.end(), x) - v.begin());

	// upper bound�� ���� ���� 2�� ������ �ε����� ���� �� �ִ�.
	// �Ȱ��� ���ͷ����Ͱ� ��ȯ�ǹǷ� ó�� �ּҰ��� ���ָ� �ȴ�. (�迭 ����)
	// �׷��� ���� 2�� ������ �ε����� 4�� ���� ���� �� �ִ�.
	int t = (int)(upper_bound(v.begin(), v.end(), x) - v.begin());

	// �ش� �ε����� ���� ��ȯ�Ϸ��� �����͸� ����Ѵ�.
	// ���� lower bound�� ���۵Ǵ� ���� ���� ã�´ٸ� ���� 2�� ���� ��.
	int f2 = *lower_bound(v.begin(), v.end(), x);
	// upper bound�δ� ���� 3�� ���� ���̴�.
	int t2 = *upper_bound(v.begin(), v.end(), x);

	printf("%d�� ����: %d, ���۵Ǵ� ��: %d, ������ ��: %d\n", x, c, f, t);
	printf("lower bound�� ���۵Ǵ� ���� ��: %d, upper bound�� ���۵Ǵ� ���� ��: %d\n", f2, t2);

	// ����� �迭�� Ȱ�� (���� ����� �Ȱ��� �����Ѵ�.)
	c = (int) (upper_bound(a, a + 5, x) - lower_bound(a, a + 5, x));
	f = (int) (lower_bound(a, a + 5, x) - a);
	t = (int) (upper_bound(a, a + 5, x) - a);
	f2 = *lower_bound(a, a + 5, x);
	t2 = *upper_bound(a, a + 5, x);

	printf("%d�� ����: %d, ���۵Ǵ� ��: %d, ������ ��: %d", x, c, f, t);
	printf("lower bound�� ���۵Ǵ� ���� ��: %d, upper bound�� ���۵Ǵ� ���� ��: %d\n", f2, t2);

	return 0;
}