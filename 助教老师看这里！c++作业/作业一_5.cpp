#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 30;

class Solution
{
public:
    Solution(string s)
    {
        str = s;
    }

    int allocate_numbers()
    {
        int len = str.size();
        for(int i = 0; i < len; i ++) alpha[str[i] - 'a' + 1] ++;

        sort(alpha + 1, alpha + 27, cmp);

        int val = 26, res = 0;
        for(int i = 1; i <= 26; i ++)
        {
            res += alpha[i] * val;
            val --;
        }

        return res;
    }

private:
    int alpha[N];
    string str;

    static bool cmp(int a, int b)
    {
        return a > b;
    }
};

int main()
{
    string s;

    cin >> s;

    Solution solution(s);
    int res = solution.allocate_numbers();

    cout << res << endl;

    return 0;
}
