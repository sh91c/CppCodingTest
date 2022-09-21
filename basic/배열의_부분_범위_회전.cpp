#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v;

	for (int i = 1; i <= 6; i++) v.push_back(i);

	int i = 1;
	int temp = v[i];
	v[i] = v[i + 1];
	v[i + 1] = v[i + 2];
	v[i + 2] = v[i + 3];
	v[i + 3] = temp;

	for (int i : v) cout << i << " ";

	return 0;
}