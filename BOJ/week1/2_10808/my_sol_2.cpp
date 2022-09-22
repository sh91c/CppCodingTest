#include <iostream>

using namespace std;

int a[26];
string str;

int main(void)
{
    cin >> str;
    for (char c : str) a[c - 'a'] += 1;
    for (int i : a) cout << i << " ";
}