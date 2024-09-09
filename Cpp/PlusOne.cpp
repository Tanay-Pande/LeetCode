#include<vector>
#include<iostream>
using namespace std;
vector<int> plusone(vector<int> &digits){
	int big = digits.size() - 1;
        for (int i = big; i >= 0; i--) {
            if (digits[i] == 9) {
                digits[i] = 0;
                if (i == 0)
                    digits.insert(digits.begin(), 1);
            } else {
                digits[i]++;
                return digits;
            }
        }
        return digits;
}

int main(){
	vector<int> digits = {9,9,9,4,5,9,9};
	plusone(digits);
	for(auto it : digits){
		cout << it;
	}
	return 0;
}
