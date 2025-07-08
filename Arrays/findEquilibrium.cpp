//Find an equilibrium point in an given array




#include<iostream>
#include<vector>

using namespace std;


//Optimal Approach T.C => O(n), S.C => O(1)
bool hasEqPoint(vector<int>&arr,int n) {
    int sum = 0;
    int lsum = 0;
    for (int i = 0; i < n;++i){
        sum += arr[i];
    }
    for (int i = 0; i < n;++i){
        if(lsum == sum - lsum - arr[i])
            return true;
        lsum += arr[i];
    }
    return false;
}


int main(){
	int n;
	cout << "Enter the number of element : ";
	cin >> n;
    vector<int> arr(n, 0);
    cout << "Enter the elements: ";
    for(int &i : arr){
        cin >> i;
    }
    hasEqPoint(arr, n) ? cout << "Has an Equilibrium point" : cout << "Has no Equilibrium point!!!";
    return 0;
}