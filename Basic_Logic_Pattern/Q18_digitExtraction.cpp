#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,lastDigit=0,num1,rNum;
    cin>>num;
    num1=rNum=num;
    //Method for printing digits T.C: O(n)
    while (num>0)
    {
        lastDigit= num%10;
        num=num/10;
        cout<<lastDigit<<endl;;

    }
    
    //Method for counting digits T.C: O(log10(n))
    int cnt = log10(num1)+1;
    cout<<cnt<<endl;


    //Method for reversing the number
    int revNum =0;
    while(rNum>0)
    {
        lastDigit = rNum %10;
        rNum = rNum/10;
        revNum = (revNum*10)+lastDigit ;
    }
    cout<<revNum<<endl;

    return 0;

    

}