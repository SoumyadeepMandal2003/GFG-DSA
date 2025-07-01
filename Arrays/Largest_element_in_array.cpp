#include <iostream>

using namespace std;

int largest_element(int arr[], int n){
	int max_index=0;
	for(int i=0;i<n;++i){
		if(arr[i]>arr[max_index]){
			max_index = i;
		}
	}
	return max_index;
}

int main(){
	int n=0;
	cin >> n;
	int* arr = new int[n];
	cout << "Enter the elements: ";
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	cout << largest_element(arr,n);
}