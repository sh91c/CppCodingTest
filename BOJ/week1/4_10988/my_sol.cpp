#include <iostream>
#include <vector>
#include <algorithm>
// #include <array> : 일반적인 배열과 관련된 헤더

using namespace std;

string str;
vector<char> v;
bool isPel = false;

int main(void)
{
    cin >> str;

    for (char c: str)
    {
        v.push_back(c);
    }

    reverse(str.begin(), str.end()); // #include <algorithm>

    /*cout << str << "\n";
    for (char c: v) cout << c;
    cout << "\n";*/

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == str[i])
        {
            isPel = true;
        }
        else
        {
            isPel = false;
            // 한번이라도 일치하지 않으면 무조건 false임. 탈출 조건 또는 예외사항도 항상 고민해볼것.
            // break문 없이 aaba를 입력하면 첫 글자 a와 마지막 글자 a가 같기 때문에 true를 출력하는 문제가 발생함..
            break;
        }
    }

    cout << isPel;
}