#include <vector>
#include <iostream>

using namespace std;

int majorityElement(vector<int> &nums)
{
	int num = nums[0], count = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == num) {
                count++;
            } else {
                count--;
            }
            if (count == 0) {
                num = nums[i];
                count = 1;
            }
        }
	cout << num;
        return num;
}

int main()
{
	vector<int> vec = {3, 2, 3};
	majorityElement(vec);
	return 0;
}
