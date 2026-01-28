#include <iostream>
using namespace std;

int maxSubArraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int currMax = arr[0];

    for (int i = 1; i < n; i++) {
        currMax = max(arr[i], currMax + arr[i]);
        maxSoFar = max(maxSoFar, currMax);
    }
    return maxSoFar;
}

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubArraySum(arr, n);

    cout << "Maximum contiguous subarray sum is: " << maxSum << endl;

    return 0;
}
