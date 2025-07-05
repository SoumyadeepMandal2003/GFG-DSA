//Majority Element(element that appears more than half the number of elements)

#include<iostream>
#include<vector>
using namespace std;

//naive approach T.C. => O(n^2)
// int majorityElement(vector<int>& arr){
//     int n = arr.size();
//     for (int i = 0;i < n;++i){
//         int cnt = 1;
//         for (int j = i + 1; j < n;++j){
//             if(arr[j] == arr[i]){
//                 ++cnt;
//             }
//         }
//         if(cnt>n/2){
//             return i;
//         }
//     }
//     return -1;
// }



//Optimized Approach T.C. = > O(n)
//also known as Boyer-Moore Voting Algo

int majorityElement(vector<int>& arr) {
    int n = arr.size();
    int res = 0;
    int count = 1;

    // First pass: find candidate
    for (int i = 1; i < n;++i)
    {
        if(arr[res]==arr[i]){
            count++;
        }else{
            count--;
        }
        if(count == 0){
            res = i;
            count = 1;
        }
    }

    // Second pass: verify candidate
    count = 0;
    for (int num : arr) {
        if (num == arr[res]) {
            count++;
        }
    }

    if (count > n / 2) {
        return res;
    }
    return -1;
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
    if(majorityElement(arr)!=-1){
        cout << "Index of majority element is: " << majorityElement(arr) << endl;
    }else{
        cout << "No majority element found!!!";
    };
    return 0;
}