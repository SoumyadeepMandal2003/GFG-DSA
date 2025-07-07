//Print first M N-bonacci numbers


#include<iostream>
#include<vector>
using namespace std;



void printNbonacci(vector<int>&arr, int M,int N) {
    arr[N - 1] = 1;
    int currWindow = 1;
    for (int i = 0; i < M;++i){
        cout << arr[i] << " ";
        if(i+N<M){
            arr[i + N] = currWindow;
            currWindow += (arr[i + N] - arr[i]);
        }
    }
}


int main(){
	int M,N;
	cout << "Enter the number of element : ";
	cin >> M;
    vector<int> arr(M, 0);
    cout << "Enter the N in N-binacci: ";
    cin >> N;
	printNbonacci(arr,M,N);
	return 0;
}