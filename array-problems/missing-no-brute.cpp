#include <iostream>
using namespace std;
//brute force approach
int missingNumber(int a[], int N) {
    for (int i = 1; i <= N; i++) {
        bool found = false;
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                found = true;
                break;
            }
        }
        if (!found) return i;
    }
    return -1;
}
int main() {
    int N = 0;
    cout << "Enter size (N): ";
    cin >> N;
    int a[N - 1];
    cout << "Enter " << N - 1 << " array elements: ";
    for (int i = 0; i < N - 1; i++) {
        cin >> a[i];
    }
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
