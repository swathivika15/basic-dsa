#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
//average time complexity
bool checkPrime(int n)
{ 
    int cnt = 0;
    for(int i = 1; i<=n; i++)
    { 
        if(n%i ==0)
        { 
            cnt = cnt+1;
        }
    }
    return (cnt==2) ? true : false;
}
int main() 
{
    int n;
    cout<<"Enter any number:";
    cin>>n;
    if(checkPrime(n))
    {
        cout << n << " is a prime number." << endl;
    } else 
    {
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}                
