#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    //best time complexity
    int l=0;
    //comparing elements of array and largest number
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
        {
            l=arr[i];
        }
    }
    return l;
}
