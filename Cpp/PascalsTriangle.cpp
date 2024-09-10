#include<vector>
#include<iostream>
using namespace std;

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> pas = {{1}};
	for(int i = 0; i < numRows - 1; i++){
		vector <int> vec = {1};
		for(int j = 0; j < pas[i].size() - 1; j++){
			vec.push_back(pas[i][j] + pas[i][j+1]);
		}
		vec.push_back(1);
		pas.push_back(vec);
	}
	for(auto it : pas){
		for(auto i : it){
			cout << i <<  " ";
		}
		cout << endl;
	}
	return pas;
 }

int main(){
	generate(5);
	return 0;
}
