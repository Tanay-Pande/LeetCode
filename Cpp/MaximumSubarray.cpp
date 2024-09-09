#include<vector>
#include<iostream>
#include<climits>
using namespace std;
int maxsubarray(vector<int> & nums){
	int sum = 0;
       int max = INT_MIN;
       for(int i = 0; i < nums.size(); i++){
	       sum += nums[i];
	       if(sum > max) max = sum;  
	       if(sum < 0){
		       sum = 0;
	       }
       }	       
	return max;
}
int main(){
	vector<int> vec = {2,1,-3,4,-1,2,1,-5,4};
	cout << maxsubarray(vec);
	return 0;
}
