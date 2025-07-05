#include <iostream>
#include <vector>
using namespace std;

//T.C => O(n^2),S.C => O(1)
// int maxCircularSubarray(const vector<int>& arr) {
//     int n = arr.size();
//     int maxSum = INT_MIN;
//     for (int i = 0; i < n; ++i) {
//         int currMax = 0;
//         for (int j = 0; j < n;++j){
//             currMax += arr[(i + j) % n];
//             maxSum = max(currMax, maxSum);
//         }
//     }
//     return maxSum;
// }


//Optimize Approach TC=>O(n) S.C=>O(1)
//Also known as Kadane Algorithm + Circular Approach

int maxCircularSubarray(vector<int>& A) {
    int n = A.size();
    int totalSum = 0;

    int currMax = A[0], maxSum = A[0];
    int currMin = A[0], minSum = A[0];

    for (int i = 0; i < n; ++i) {
        int num = A[i];
        totalSum += num;

        currMax = max(num, currMax + num);
        maxSum = max(maxSum, currMax);

        currMin = min(num, currMin + num);
        minSum = min(minSum, currMin);
    }
    if (maxSum < 0) {
        return maxSum;
    }

    return max(maxSum, totalSum - minSum);
}



int main() {
    int n;
	cout << "Enter the number of element : ";
	cin >> n;
    vector<int> arr(n);
	cout << "Enter the Elements : ";
	for(int &i : arr){
        cin >> i;
    }
    cout << "Maximum Sum of Circular subarray: " << maxCircularSubarray(arr) << endl;
    return 0;
}
