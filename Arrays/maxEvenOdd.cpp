#include <iostream>
#include <vector>
using namespace std;

//T.C => O(n^2),S.C => O(1)
// int maxEvenOdd(const vector<int>& arr) {
//     int res = 1;
//     for (int i = 0; i < arr.size(); ++i) {
//         int current = 1;
//         for (int j = i + 1; j < arr.size();++j){
//             if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0)){
//                 ++current;
//             }else{
//                 break;
//             }
//             res = max(res, current);
//         }
//     }
//     return res;
// }


//Optimize Approach TC=>O(n) S.C=>O(1)

int maxEvenOdd(const vector<int>& arr) {
    int res = 1;
    int curr = 1;
    for (int i = 1; i < arr.size(); ++i) {
        if((arr[i]%2==0 && arr[i-1]%2!=0) || (arr[i]%2!=0 && arr[i-1]%2==0)){
            ++curr;
            res = max(res, curr);
        }else{
            curr = 1;
        }
    }
    return res;
}


int main() {
    int n;
	cout << "Enter the number of element : ";
	cin >> n;
    vector<int> arr(n);
	cout << "Enter the Elements : ";
	for(int &i : arr){
        cin >> i;
    }
    cout << "Maximum length of even-odd subarray: " << maxEvenOdd(arr) << endl;
    return 0;
}
