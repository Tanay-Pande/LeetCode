#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstdlib>

using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k) {
	int n = nums.size();
	pair<int, int> p[n];
	for(int i = 0 ; i < n; ++i){
		p[i] = {nums[i], i};
	}
	sort(p, p+n);
	for(int  i = 0; i < n - 1; ++i){
		if(p[i].first == p[i+1].first){
			if(abs(p[i].second - p[i+1].second) <= k){
				return true;
			}
		}
	}
	return false;
}

int main(){
	vector<int> vec = {1,2,3,1,2,3};
	cout << containsNearbyDuplicate(vec, 2);
	return 0;
}
