//reverse an array
#include <iostream>
using namespace std;

void reverse_array(int *arr,int n){
	int start=0;
	int end =n-1;
	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}


int main(){
	int n=0;
	cin >> n;
	int *arr = new int[n];
	cout << "Enter elements of the array: ";
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	
	reverse_array(arr,n);
	
	cout << "Reverse of the array: ";

	
	for(int i=0;i<n;++i){
		cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}