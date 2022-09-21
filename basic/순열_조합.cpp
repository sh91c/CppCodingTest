#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printV(vector<int>& v)
{
    for (auto i : v) cout << i << " ";
    cout << "\n";
}

/* 순열: next_permutation(), prev_permutation() 활용
int main()
{
    int a[3] = {1, 2, 3};
    vector<int> v;

    for (int& i : a) v.push_back(i);

    do
    {
        printV(v);
    }
    while (next_permutation(v.begin(), v.end()));

    cout << "-------------" << "\n";

    v.clear();

    for (int i = 2; i >= 0; i--) v.push_back(a[i]);

    do
    {
        printV(v);
    }
    while (prev_permutation(v.begin(), v.end()));

    return 0;
}
*/

int a[3] = { 1, 2, 3 };

vector<int> v;

void makePermutation(int n, int r, int depth)
{
    cout << n << ": " << r << ": " << depth << "\n";

    if (r == depth)
    {
        printV(v);
        return;
    }

    for (int i = depth; i < n; i++)
    {
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]);
    }

    return;
}

int main()
{
    for (int& i : a) v.push_back(i);
    makePermutation(3, 3, 0);

    return 0;
}