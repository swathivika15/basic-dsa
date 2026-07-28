#include<iostream>
using namespace std;
int main()
{
        int n,count=0;
        cout<<"Enter number to count digits:";
        cin>>n;
        while(n!=0)
        {
                int x = n%10;
                n /= 10;
                count++;
        }
        cout<<"Number of digits:"<<count<<endl;
}
