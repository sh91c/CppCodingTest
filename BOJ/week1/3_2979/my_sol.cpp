#include <iostream>

using namespace std;

int a, b, c;
pair<int, int> t;
int v[104];
int sum;

int main(void)
{
    cin >> a >> b >> c;

    for (int i = 0; i < 3; i++)
    {
        cin >> t.first >> t.second;
        for (int j = t.first; j < t.second; j++)
        {
            v[j] += 1;
        }
    }

    for (int i: v)
    {
        if (i == 1) sum += i * a;
        if (i == 2) sum += i * b;
        if (i == 3) sum += i * c;
    }

    cout << sum;
}