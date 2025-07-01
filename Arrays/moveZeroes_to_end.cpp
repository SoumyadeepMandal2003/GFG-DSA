//move_zeroes to end
#include <iostream>
using namespace std;

//Naive Approach
//void moveZeroes_to_end(int* arr,int n){
//	for(int i=0;i<n;++i){
//		if(arr[i]==0){
//			for(int j=i;j<n;++j){
//				if(arr[j]!=0){
//					swap(arr[i],arr[j]);
//				}
//			}
//		}
//	}
//}

//Optimal Approach
void moveZeroes_to_end(int* arr,int n){
	int cnt = 0;
	for(int i=0;i<n;++i){
		if(arr[i]!=0){
			swap(arr[cnt],arr[i]);
			++cnt;
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
	
	moveZeroes_to_end(arr,n);
	
	for(int i=0;i<n;++i){
		cout << arr[i] << " ";
	}
	
	return 0;
}