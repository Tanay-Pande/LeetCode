#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int binarysearch(vector<int>& vec, int num, int min) {
        int low = min + 1, high = vec.size() - 1, mid;
        while (high >= low) {
            mid = (high + low) / 2;
            if (num > vec[mid]) {
                low = mid + 1;
            } else if (num < vec[mid]) {
                high = mid - 1;
            } else {
                return mid;
            }
        }
        return -1;
    }

    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0, temp;
        for (int i = 0; i < nums.size(); ++i) {
            if (i != 0 && nums[i - 1] == nums[i]) {
                continue;
            }
            temp = binarysearch(nums, nums[i] + k, i);
            if (temp != -1) {
                count++;
            }
        }
        return count;
    }


int main(){
	vector<int> vec = {3,1,4,1,5};
	cout << findPairs(vec, 2);
	return 0;
}
