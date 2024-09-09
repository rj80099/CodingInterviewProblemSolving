#include <bits/stdc++.h>
using namespace std;

// Gone bananas Hackerearth
// IMPORTANT:
// In the question one condition is missing,
// which is that the number of bananas given to each of the people should be equal.

// Since every banana is to be given away and the number of banana each monkey receives is an integer ,
// we can choose a M number of monkeys, such that M is a divisor of N.
// So, now we can conclude that it is NOT possible to give away bananas with the above restrictions when N is a prime number.

bool IsPrime(int N)
{
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 3)
        {
            cout << "No" << endl;
        }
        else
        {
            if (!IsPrime(n))
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}