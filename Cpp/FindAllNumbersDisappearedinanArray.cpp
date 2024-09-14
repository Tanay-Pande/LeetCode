#include<iostream>
#include<vector> 

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> vec(n + 1, 0);
        vector<int> pn;
        for(auto it : nums){
            vec[it] = 1;
        }
        for(int i = 1; i <= n ; ++i){
            if(vec[i] == 0){
                pn.push_back(i);
            }
        }
        return pn;
    }

int main(){
	vector<int> vec = {4,3,2,7,8,2,3,1};
	findDisappearedNumbers(vec);
	return 0;
}
