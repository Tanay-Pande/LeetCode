#include<vector>
#include<iostream>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	vector<int> vec(n+m);
	int k = 0, i = 0, j = 0;
	while(n > j && m > i){
		vec[k] = min(nums1[i],nums2[j]);
		if(vec[k] == nums1[i]) i++;
		else j++;
		k++;
	}
	while(n > j){
		vec[k++] = nums2[j++];
	}
	while(m > i){
                vec[k++] = nums1[i++];
        }
	for(int t = 0; t < n+m; t++){
		nums1[t] = vec[t];
	}
}

int main(){
	vector <int> n1 = {1,2,3,0,0,0};
	vector <int> n2 = {2,5,6};
	merge(n1,3,n2,3);
	for(auto it : n1){
		cout << it;
	}
	return 0;
}

