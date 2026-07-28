#include <iostream>
using namespace std;
//best time complexity
long long fastPower(int base, int exp) 
{
    long long result = 1;
    while (exp > 0) 
    {
        if (exp % 2 == 1) 
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}
bool isArmstrong(int num) 
{
    int originalNum = num;
    long long sum = 0;
    int digits = 0;
    int temp = num;
    while (temp > 0) 
    {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp > 0) 
    {
        int digit = temp % 10;
        sum += fastPower(digit, digits);
        temp /= 10;
    }
    return sum == originalNum;
}
int main() 
{
    long long num;
    cout << "Enter a number: ";
    cin >> num;
    if (isArmstrong(num)) 
    {
        cout << num << " is an Armstrong number." << endl;
    } 
    else 
    {
        cout << num << " is not an Armstrong number." << endl;
    }   
    return 0;
}
