#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
	vector<int> getRow(int rowIndex) {
		int n = rowIndex;
		vector<int> result(n+1);
		result[0]= 1;
		for (int i = 0; i < n+1; i++)
		{
			for (int j = i; j >0; j--)   //important
				result[j] = result[j] + result[j - 1];
		}
		return result;
	}
};

void main()
{
	Solution s;
	s.getRow(3);
}
