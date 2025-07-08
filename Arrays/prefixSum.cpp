//PrefixSum --> Prefix Sum is a powerful technique used to efficiently compute the sum of elements in a subarray. Instead of recalculating the sum every time from scratch (which takes O(N) time), the prefix sum allows you to answer sum queries in O(1) time after O(N) preprocessing.



#include<iostream>
#include<vector>

using namespace std;



int prefixSum(vector<int>&arr, int l,int r) {
    int n = arr.size();
    vector<int> prefixsum(n,0);
    prefixsum[0] = arr[0];
    for (int i = 1; i < arr.size();++i){
        prefixsum[i] = prefixsum[i - 1] + arr[i];
    }
    if(l>0){
    return (prefixsum[r] - prefixsum[l-1]);
    }else{return prefixsum[r];}
}


int main(){
	int N,l,r;
	cout << "Enter the number of element : ";
	cin >> N;
    vector<int> arr(N, 0);
    cout << "Enter the elements: ";
    for(int &i : arr){
        cin >> i;
    }
    cout << "Range: ";
    cin >> l >> r;
    cout << prefixSum(arr,l,r);
    return 0;
}