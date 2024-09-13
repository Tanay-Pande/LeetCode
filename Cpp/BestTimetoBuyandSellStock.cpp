#include<vector>
#include<iostream>
using namespace std;

int maxProfit(vector<int>& prices) {
	int money = 0, min = prices[0];
	for(auto it : prices){
		if(it > min){
			if(it - min > money)
			       	money = it - min;
		}else
			min = it;
	}
	return money;
}


int main(){
	vector<int> vec = {7,1,5,3,6,4};
	maxProfit(vec);
	return 0;
}
