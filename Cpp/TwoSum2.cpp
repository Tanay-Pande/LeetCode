#include <iostream>
#include <vector>

using namespace std;

int binarysearch(vector<int> &vec, int num, int min)
{
	int low = min + 1, high = vec.size() - 1, mid;
	while (high >= low)
	{
		mid = (high + low) / 2;
		if (num > vec[mid])
		{
			low = mid + 1;
		}
		else if (num < vec[mid])
		{
			high = mid - 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

vector<int> twoSum(vector<int> &numbers, int target)
{
	int n, i;
	for (i = 0; i < numbers.size(); i++)
	{
		n = binarysearch(numbers, target - numbers[i], i);
		if (n != -1)
		{
			break;
		}
	}
	return {i + 1, n + 1};
}

int main()
{
	vector<int> vec = {2, 7, 11, 15};
	twoSum(vec, 9);
	return 0;
}
