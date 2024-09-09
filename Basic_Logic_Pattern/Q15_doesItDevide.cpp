#include <bits/stdc++.h>
using namespace std;

// Does it divide Hackerearth
// The sum of numbers from 1 to N, S=N*(N+1)/2 and Product P=1*2*3*..*N
// For P to be divisible by S, All we have to do is to check whether N+1 is prime or not,
// if it is prime then sum of the numbers will not divide product of the numbers
// and if it is not prime then sum will divide product.

bool IsPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
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
        if (n != 1 && IsPrime(n + 1))
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}