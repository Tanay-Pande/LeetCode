#include <vector>
#include <iostream>
using namespace std;

vector<int> getRow(int rowIndex)
{
	vector<int> vec(rowIndex + 1, 0);
	for (int row = 0; row < vec.size(); ++row)
	{
		vec[row] = 1;
		for (int i = row - 1; i > 0; --i)
		{
			vec[i] += vec[i - 1];
		}
	}
	return vec;
}

int main()
{
	getRow(5);
	return 0;
}
