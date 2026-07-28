#include<iostream>
using namespace std;
int main()
{
        //average time complexity
        int n=0,i=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
                cin>>arr[i];
        }
        int l=0;
        //comparing element and largest number 
        for(int i=0;i<n;i++)
        {
                if(arr[i]>l)
                {
                        l=arr[i];
                }
        }
        cout<<l;
        return 0;
}
