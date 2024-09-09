#include <bits/stdc++.h>
using namespace std;

// Favourite Numbers Codechef
// Here we check if the number is divisible by both 2 and 7 then alice will take it
// else if the number is not divisible by 2 but divisible by 9 then bob will take it
// otherwise charlie will take it

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if ((a % 2 == 0) && (a % 7 == 0))
        {
            cout << "Alice" << endl;
        }
        else if ((a % 2 != 0) && (a % 9 == 0))
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Charlie" << endl;
        }
    }
}