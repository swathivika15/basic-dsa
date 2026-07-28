//reversingdigits
#include<iostream>
using namespace std;
int main()
{
    int n,x,rev=0;
    cout<<"Enter a number to reverse the digits:";
    cin>>n;
    while(n!=0)
    {
        x=n%10;
        n/=10;
        rev=rev*10+x;
    }
    cout<<"Reversed number: "<<rev<<endl;
    return 0;
}
