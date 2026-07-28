#include <bits/stdc++.h> 
using namespace std;
//average time complexity
void isArmstrong(int num) 
{
    int n = num;
    int k = to_string(num).length();
    int sum = 0;
    while(n > 0)
    {
        int ld = n % 10;
        sum += pow(ld, k); 
        n = n / 10;
    }
    if(sum==num)
    {
        cout<<num<<" is armstrong number"<<endl;
    }
    else
    {
        cout<<num<<" is not an armstrong number"<<endl;
    }
}
int main() {
    int number=0;
    cout<<"Enter number:";
    cin>>number;
    isArmstrong(number); 
    return 0;
}
