#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string armstrongNum(int n)
    {
        int sum = 0, num = 0;
        for (int i = n; i > 0; i /= 10)
        {
            num = i % 10;
            sum += (num * num * num);
        }

        // cout << sum << endl;
        if (sum == n)
            return "Armstrong";
        return "Not Armstrong";
    }
};
int main()
{

    int a;
    cin >> a;
    Solution sol;
    cout << sol.armstrongNum(a) << endl;
    return 0;
}