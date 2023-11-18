/* Write a C++ program to check whether numbers in a vector can be rearranged.
so that each number appears exactly once in a consecutive list of numbers.
Return true otherwise false.*/

#include<bits/stdc++.h>
#include <vector>
using namespace std;

bool test(std::vector<int> nums)
{
  std::sort(nums.begin(), nums.end());
	for (int i = 0; i < nums.size() - 1; i++)
	{
		if (nums[i + 1] != (nums[i] + 1))
		{
			return false;
		}
	}
	return true;
 }
int main(){
	//vector<int> nums = {1, 2 ,5, 7, 4, 3, 6};
	vector<int> nums = {1, 2 ,5, 0, 3, 6, 7};
    for (int x : nums)
        cout << x << " ";
    cout << "\nCheck consecutive numbers in the said vector! "<< test(nums) << endl;
}
