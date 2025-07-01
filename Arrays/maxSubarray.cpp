#include <iostream>
#include <vector>
using namespace std;

////T.C => O(n^2),S.C => O(1)
// int maxSubarray(const vector<int>& arr) {
//     int maxSum = 0;
//     for (int i = 0; i < arr.size();++i){
//         int currSum = arr[i];
//         for (int j = i + 1; j < arr.size();++j){
//             currSum += arr[j];
//             maxSum = max(maxSum, currSum);
//         }
//         currSum = 0;
//     }
//     return maxSum;
// }



//Optimized Approach T.C => O(n),S.C => O(1)
int maxSubarray(const vector<int>& arr) {
    int maxSum = 0;
    int currMax = arr[0];
    int n = arr.size();
    for (int i = 1; i < n;++i){
        currMax = max(currMax + arr[i], arr[i]);
        maxSum = max(maxSum,currmax)
    }
    return maxSum;
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
    cout << "Maximum Subarray Sum is: " << maxSubarray(arr) << endl;
    return 0;
}
