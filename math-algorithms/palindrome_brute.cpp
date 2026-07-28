#include<iostream>
using namespace std;
int main()
{
        //average time complexity
        int n,x,rev=0;
        cout<<"Enter number ";
        cin>>n;
        int temp=n;
        while(n!=0)
        {
                x=n%10;
                n=n/10;
                rev=rev*10+x;
        }
        //if the reversed number is same as given number then it is a palindrome
        if(temp==rev)
                cout<<"Entered number is palindrome";
        else
                cout<<"Entered number is not a palindrome";
        return 0;

}
