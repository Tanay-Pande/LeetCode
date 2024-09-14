#include<iostream>
#include<vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
	for(int i = 1; i < nums.size(); ++i){
            if (nums[i] == 0)
                continue;
            else {
                while (i > 0 && nums[i - 1] == 0) {
                    swap(nums[i], nums[i - 1]);
		    i--;
                }
            }
        }
}

int main(){
	vector<int> vec = {0,1,0,3,12};
	moveZeroes(vec);
	return 0;
}
