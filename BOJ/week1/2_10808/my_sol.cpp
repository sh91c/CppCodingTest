#include <iostream>

using namespace std;

char a[26];
int cnt[26] = {0};
string s;

int main(void)
{
    for (int i = 97; i < 97 + 26; i++)
    {
        a[i - 97] = (char) i;
    }

    cin >> s;

    for (char c : s)
    {
        cnt[(int) c - 97] += 1;
    }

    for (int i: cnt) cout << i << " ";
}