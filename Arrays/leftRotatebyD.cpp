//left rotate by d times


#include <iostream>
using namespace std;

////Naive Approach T.C -> (n*d) , S.C -> (1)
//void leftRotateOne(int* arr,int n){
//	int temp = arr[0];
//	for(int i=1;i<n;++i){
//		arr[i-1] = arr[i];
//	}
//	arr[n-1] = temp;
//}
//
//void leftRotate(int *arr,int n,int d){
//	for(int i=0;i<d;++i){
//		leftRotateOne(arr,n);
//	}
//}


////more optimized SoLn T.C -> (n) & S.C -> (d)
//void leftRotate(int *arr,int n,int d){
//	int *temp = new int[d];
//	for(int i=0;i<d;++i){
//		temp[i] = arr[i];
//	}
//	for(int i=d;i<n;++i){
//		arr[i-d] = arr[i];
//	}
//	for(int i=0;i<d;++i){
//		arr[n-d+i] = temp[i];
//	}
//}


//most optimized (Reversal Algo)

//void reverse(int *arr,int low,int high){
//	while(low<high){
//		swap(arr[low],arr[high]);
//		++low;
//		--high;
//	}
//}
//
//void leftRotate(int *arr,int n,int d){
//	reverse(arr,0,d-1);
//	reverse(arr,d,n-1);
//	reverse(arr,0,n-1);
//}


int main(){
	int n,d;
	cout << "Enter number of elements in array : ";
	cin >> n;
	int *arr = new int[n];
	cout << "Enter the elements of the array: ";
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	
	cout << "Enter the number of rotation: ";
	
	cin >> d;
	
	leftRotate(arr,n,d);
	
	for(int i=0;i<n;++i){
		cout << arr[i] << " ";
	}
	
	return 0;
}