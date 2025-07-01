//Max difference of arr[j] - arr[i] such that j>i
#include<iostream>
using namespace std;

//naive TC=> O(n^2),SC=> O(1)
//int maxDiff(int* arr,int n){
//	int max = INT_MIN;
//	for(int i=0;i<n-1;++i){
//		for(int j=i+1;j<n;++j){
//			if((arr[j]-arr[i])>max){
//				max = (arr[j] - arr[i]);
//			}
//		}
//	}
//	return max;
//} 

//Optimized TC=> O(n),SC=>O(n)

int maxDiff(int* arr,int n){
	int diff = arr[1]-arr[0];
	int minVal = arr[0];
	for(int j=1;j<n;++j){
		diff = max(diff,arr[j]-minVal);
		minVal = min(minVal,arr[j]);
	}
	return diff;
}

int main(){
	int n;
	cout << "Enter the number of element : ";
	cin >> n;
	int *arr = new int[n];
	cout << "Enter the Elements : ";
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	cout << maxDiff(arr,n);
	return 0;
}