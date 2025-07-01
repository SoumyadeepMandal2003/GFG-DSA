#include <iostream>

using namespace std;


//naive approach T.C.(n^2),S.C.(1)

//bool isSorted(int arr[], int n){
//	for(int i=0;i<n-1;++i){
//		for(int j=i+1;j<n;++j){
//			if(arr[i]>arr[j]){
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main(){
//	int n=0;
//	cin >> n;
//	int* arr = new int[n];
//	cout << "Enter the elements: ";
//	for(int i=0;i<n;++i){
//		cin >> arr[i];
//	}
//	if(isSorted(arr,n)==1){
//		cout << "Array is Sorted..";
//	}
//	else{
//		cout << "Array is not sorted..";
//	}
//}



//Optimized Approach T.C.(n),S.C.(1)


bool isSorted(int arr[], int n){
	for(int i=1;i<n;++i){
		if(arr[i]<arr[i-1]){
			return false;
		}
	}
	return true;
}

int main(){
	int n=0;
	cin >> n;
	int* arr = new int[n];
	cout << "Enter the elements: ";
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	if(isSorted(arr,n)==1){
		cout << "Array is Sorted..";
	}
	else{
		cout << "Array is not sorted..";
	}
}