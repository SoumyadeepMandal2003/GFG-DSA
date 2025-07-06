#include<iostream>
#include<vector>

using namespace std;

int maxConsecutiveSum(vector<int> &arr,int n,int k){
    int maxSum = INT_MIN;
    int currMax = 0;
    for (int i = 0; i < k;++i){
        currMax += arr[i];
    }
    maxSum = max(currMax, maxSum);
    for (int i = k; i < n;++i){
        currMax += (arr[i] - arr[i - k]);
        maxSum = max(currMax, maxSum);
    }
    return maxSum;
}

int main() {
    int n,k;
	cout << "Enter the number of element : ";
	cin >> n;
    cout << "Enter value of K : ";
    cin >> k;
    vector<int> arr(n);
	cout << "Enter the Elements : ";
	for(int &i : arr){
        cin >> i;
    }
    cout << "Maximum Sum of K consecutive elements : " << maxConsecutiveSum(arr,n,k) << endl;
    return 0;
}