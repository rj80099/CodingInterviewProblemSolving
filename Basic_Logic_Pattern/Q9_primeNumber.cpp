/* why sqrt(n)?
You can  understand this as ..Consider a number n and its factors a and b. Let suppose n=a×b, one of the factors must be less than or equal to sqrt(n).
 If both factors were greater than sqrt(n) then their product will be greater than n.
So we only need to check divisors up to sqrt(n)  because if a number n has any factors larger than its square root, it must also have factors smaller than its square root.

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
};
int main()
{

    int a, b;
    cin >> a;
    Solution sol;
    string result = sol.isPrime(a) ? "a prime number" : "not a prime number";
    cout << a << " is " << result << endl;
    return 0;
}