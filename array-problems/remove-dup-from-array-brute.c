#include <stdio.h>
//optimal approach
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0; 
    int i = 0;
    for (int j = 1; j < numsSize; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}
int main() {
    int n = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input. Array size must be greater than 0.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int res = removeDuplicates(arr, n);
    printf("Updated array: ");
    for (int i = 0; i < res; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
