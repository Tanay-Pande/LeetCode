#include<vector>
#include<iostream>
using namespace std;

int maxProfit(vector<int>& prices) {
        int money = 0, profit = 0, min = prices[0], max = min;
	for(int i = 1; i < prices.size(); ++i){
		if (prices[i] > max)
		       max = prices[i];
		else{
			money += profit;
			min = prices[i];
			max = min;
		}		
		profit = max - min;
	}
	money += profit;
        return money;
}


int main(){
        vector<int> vec = {7,1,5,3,6,4};
        maxProfit(vec);
        return 0;
}
