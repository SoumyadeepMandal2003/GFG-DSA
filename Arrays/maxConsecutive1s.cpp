#include <iostream>
#include <vector>
using namespace std;

//T.C => O(n),S.C => O(1)
int maxConsecutives(const vector<int>& arr) {
    int maxOnes = 0;
    int currOnes = 0;
    for (int i = 0; i < arr.size(); ++i) {
        if(arr[i]==1){
            ++currOnes;
        }else{
            currOnes = 0;
        }
        maxOnes = max(maxOnes, currOnes);
    }
    return maxOnes;
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
    cout << "Maximum Consecutive 1's are: " << maxConsecutives(arr) << endl;
    return 0;
}
