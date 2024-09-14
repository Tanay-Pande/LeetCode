#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int missingNumber(vector<int>& nums) {
	sort(nums.begin(), nums.end());
	int big = nums.size();
	for(int i = 0; i < big; ++i){
		if(nums[i] != i){
			return i;
		}
	}
	return big;
}

int main(){
	vector<int> vec = {9,6,4,2,3,5,7,0,1};
	cout << missingNumber(vec);
	return 0;
}
