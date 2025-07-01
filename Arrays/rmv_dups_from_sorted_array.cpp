//Remove Duplicates in a sorted array

#include <iostream>
using namespace std;


void remove_duplicates(int* arr,int n){
	int res = 1;
	for(int i=1;i<n;++i){
		if(arr[res-1]<arr[i]){
			arr[res] = arr[i];
			res++;
		}
	}
}

int main(){
	int n;
	cout << "Enter number of elements in array : ";
	cin >> n;
	int *arr = new int[n];
	cout << "Enter the elements of the array: ";
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	
	remove_duplicates(arr,n);
	
	for(int i=0;i<n;++i){
		cout << arr[i] << " ";
	}
	
	return 0;
}