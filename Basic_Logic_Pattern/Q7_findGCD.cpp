#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    int n = a > b ? a : b;
    int num;
    for (num = n; num >= 1; num--)
    {
        if (a % num == 0 && b % num == 0)
            break;
    }
    cout << "GCD is " << num << endl;
    return 0;
}