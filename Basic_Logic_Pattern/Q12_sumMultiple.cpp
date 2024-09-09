#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sumMultiple(int n)
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
                sum += i;
        }
        return sum;
    }
};
int main()
{

    int a;
    cin >> a;
    Solution sol;
    cout << sol.sumMultiple(a) << endl;
    return 0;
}