#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

int n;
string name;
vector<string> name_list;
array<int, 26> al;
vector<char> ret;

void refine(string &name)
{
    al[name[0] - 'a'] += 1;
    name_list.push_back(name);
}

int main(void)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        refine(name);
    }

    for (int i = 0; i < 26; i++)
    {
        if (al[i] >= 5) ret.push_back((char)i + 'a');
    }
    
    sort(ret.begin(), ret.end());
    
    if (ret.empty())
    {
        cout << "PREDAJA";
    } else
    {
        for (char c: ret) cout << c;
    }
}
