#include<vector>
#include<iostream>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0, maxi = 0;
        for (auto it : nums) {
            if (it == 1) {
                sum++;
            } else {
                sum = 0;
            }
            if (maxi < sum)
                maxi = sum;
        }
        return maxi;
    }

int main(){
	vector<int> vec = {1,1,0,1,1,1};
	findMaxConsecutiveOnes(vec);
	return 0;
}
