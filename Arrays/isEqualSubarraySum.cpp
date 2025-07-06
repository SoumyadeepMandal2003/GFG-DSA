#include<iostream>
#include<vector>

using namespace std;

bool isEqualSubarraySum(vector<int> &arr,int n,int k){
    int currSum = arr[0],start = 0;
    for (int i = 1; i < n;++i){
        while(k<currSum && start<n-1){
            currSum -= arr[start];
            ++start;
        }

        if(currSum == k){
            return true;
        }
        if(k>currSum){
            currSum += arr[i];
        }
        
    }
    return false;
}

int main() {
    int n,k;
	cout << "Enter the number of element : ";
	cin >> n;
    cout << "Enter value of Sum to search for : ";
    cin >> k;
    vector<int> arr(n);
	cout << "Enter the Elements : ";
	for(int &i : arr){
        cin >> i;
    }
    isEqualSubarraySum(arr,n,k) ? cout << "Found!!!" : cout << "Not Found!!!";
    return 0;
}