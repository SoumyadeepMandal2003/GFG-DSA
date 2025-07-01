//Frequencies in a sorted array
#include<iostream>
using namespace std;

////////TC=> O(n^2),SC=> O(1)

void printFreq(int* arr, int n) {
    int freq = 1, i = 1;

    while (i < n) {
        while (i < n && arr[i] == arr[i - 1]) {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }

    // Check if last element was unique or missed
    if (n == 1 || (n >= 2 && arr[n - 1] != arr[n - 2])) {
		cout << arr[n - 1] << " 1" << endl;
	}
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
	printFreq(arr,n);
	return 0;
}