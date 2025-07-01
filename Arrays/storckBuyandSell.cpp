#include <iostream>
#include <vector>
using namespace std;

int maxProfit(const vector<int>& prices) {
    int profit = 0;
    for (size_t i = 1; i < prices.size(); ++i) {
        if (prices[i] > prices[i - 1]) {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

int main() {
    int n;
	cout << "Enter the number of element : ";
	cin >> n;
    vector<int> prices(n);
	cout << "Enter the Elements : ";
	for(int &i : prices){
        cin >> i;
    }
    cout << "Maximum profit: " << maxProfit(prices) << endl;
    return 0;
}
