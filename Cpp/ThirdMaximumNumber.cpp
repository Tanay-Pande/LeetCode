#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int thirdMax(vector<int>& nums) {
        vector<int> vec;
        sort(nums.begin(), nums.end(), greater<int>());
        vec.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[i-1]){
                vec.push_back(nums[i]);
            }
        }
        if(vec.size() < 3){
            return vec[0];
        }
        else {
            return vec[2];
        }
}

int main(){
	vector<int> vec = {1 , 1 , 2};
	cout << thirdMax(vec);
	return 0;
}
