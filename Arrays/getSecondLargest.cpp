#include <iostream>

using namespace std;

int getSecondLargest(int* arr,int n){
	int max=0;
	int s_max = -1;
	for(int i=1;i<n;++i){
		if(arr[i]>arr[max]){
			s_max = max;
			max = i;
		}
		else if(arr[i]<arr[max]){
			if(s_max==-1 || arr[s_max]<arr[i]){
				s_max = i;
			}
		}
	}
	return s_max;
}

int main(){
	int n=0;
	cin >> n;
	int *arr = new int[n];
	cout << "Enter elements of the array: ";
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	cout << "Second Largest Element in Array is: " << getSecondLargest(arr,n);
	delete[] arr;
}