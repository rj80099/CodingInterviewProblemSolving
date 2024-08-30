/*
Q2 - Add Digits
Problem Link: https://leetcode.com/problems/add-digits/

Example 1:

Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2
Since 2 has only one digit, return it.

*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int digit;
    cin >> digit;
    while (digit > 10)
    {
        int currNum = 0;
        while (digit > 0)
        {
            currNum += digit % 10;
            digit /= 10;
        }
        digit = currNum;
    }
    cout << digit;
    return 0;
}