/*
Given two positive integers a and b, return the number of common factors of a and b.

An integer x is a common factor of a and b if x divides both a and b.



Example 1:

Input: a = 12, b = 6
Output: 4
Explanation: The common factors of 12 and 6 are 1, 2, 3, 6.
Example 2:

Input: a = 25, b = 30
Output: 2
Explanation: The common factors of 25 and 30 are 1, 5.


Constraints:

1 <= a, b <= 1000
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    Solution() {}
    int commonFactors(int a, int b)
    {
        int addFactor = 0;
        for (int i = 1; i <= min(a, b); i++)
        {
            // if i is divisor of both a and b then it is a common factor
            if (a % i == 0 && b % i == 0)
                addFactor++;
        }
        return addFactor;
    }
};
int main()
{
    int a, b;
    cin >> a >> b;
    Solution *sol = new Solution();
    cout << " The common factor of " << a << " and " << b << " is " << sol->commonFactors(a, b) << endl;
    return 0;
}