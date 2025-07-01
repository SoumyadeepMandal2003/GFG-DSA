//Left rotate array by one

#include <iostream>
using namespace std;


void leftRotateArray(int* arr,int n){
	int temp = arr[0];
	for(int i=1;i<n;++i){
		arr[i-1] = arr[i];
	}
	arr[n-1] = temp;
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
	
	leftRotateArray(arr,n);
	
	for(int i=0;i<n;++i){
		cout << arr[i] << " ";
	}
	
	return 0;
}