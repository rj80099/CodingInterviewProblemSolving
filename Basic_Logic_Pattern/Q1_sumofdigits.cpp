/*
Given a number, N. Find the sum of all the digits of N
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int digit, sum = 0;
    cin >> digit;

    while (digit > 0)
    {
        int rem = digit % 10;
        sum += rem;
        digit /= 10;
    }
    cout << sum << endl;
    return 0;
}
