#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i = 0; i < nums.size() / 2; ++i) {
            sum += nums[i * 2];
        }
        return sum;
    }

int main(){
	vector<int> vec = {1,4,3,2};
	cout << arrayPairSum(vec);
	return 0;
}
