#include <iostream>

using namespace std;


//naive approach T.C.(n^2),S.C.(1)

//void isLeader(int* arr, int n){
//	for(int i=0;i<n;++i){
//		bool flag = false;
//		for(int j=i+1;j<n;++j){
//			if(arr[i]<=arr[j]){
//				flag = true;
//				break;
//			}
//		}
//		if(flag == false){
//			cout << arr[i] << " ";
//		}
//	}
//}




//Best Approach T.C.(n),S.C.(1)

void isLeader(int *arr,int n){
	int curr_leader = arr[n-1];
	cout << curr_leader << " ";
	for(int i=n-2;i>=0;--i){
		if(arr[i]>curr_leader){
			curr_leader = arr[i];
			cout << curr_leader << " ";
		}
	}
}

//    !!!!!!!!!!!!!!!!!!!!!1          if in same order then reverse S.C. may become O(n) but T.C. O(n) remains same         !!!!!!!!!!!!!!!!!!!!!





int main(){
	int n=0;
	cout << "Enter the number of elements in the array: ";
	cin >> n;
	int* arr = new int[n];
	cout << "Enter the elements: ";
	for(int i=0;i<n;++i){
		cin >> arr[i];
	}
	isLeader(arr,n);
	return 0;
}