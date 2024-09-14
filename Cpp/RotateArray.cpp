#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
	int big = nums.size();
	k %= big;
	vector<int> vec;
	for(int j = (big - k); j < big; ++j){
                vec.push_back(nums[j]);
        }
	for(int i = 0; i <= (big - k) - 1; ++i){
		vec.push_back(nums[i]);
	}
	for(int i = 0; i < big; ++i){
		nums[i] = vec[i];
	}
}

int main(){
	vector<int> vec = {1,2,3,4,5,6,7};
	rotate(vec, 3);
	return 0;
}
