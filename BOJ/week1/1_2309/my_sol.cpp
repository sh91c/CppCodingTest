#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_found = false;
vector<int> nan_list(9);
vector<int> result;
int n, r;

void print(vector<int>& v) {
	sort(v.begin(), v.end());
	for (auto it : v) cout << it << "\n";
}

void combination(int start, vector<int>& v) {
	while (is_found == false) {
		int sum = 0;
		if (result.size() == r) {
			for (auto it : result) sum += it;
			if (sum == 100) {
				is_found = true;
				print(result);
				return;
			}
			return;
		}

		for (int i = start + 1; i < n; i++) {
			result.push_back(v[i]);
			combination(i, v);
			result.pop_back();
		}
		return;
	}
}

int main(void) {
	n = 9;
	r = 7;

	for (int i = 0; i < n; i++) {
		cin >> nan_list[i];
	}

	combination(-1, nan_list);
}