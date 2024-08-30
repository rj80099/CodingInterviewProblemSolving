/*
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.

Example:
4 -- numbers of line
1
6
14
0

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lin;
    cin >> lin;
    int num;
    while (lin--)
    {
        cin >> num;
        if (num <= 0)
        {
            cout << "false" << endl;
            return 0;
        }
        while (num % 2 == 0)
        {
            num /= 2;
        }
        while (num % 3 == 0)
        {
            num /= 3;
        }
        while (num % 5 == 0)
        {
            num /= 5;
        }
        string result = (num == 1) ? "true" : "false";
        cout << result << endl;
    }

    return 0;
}