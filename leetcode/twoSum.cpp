#include <iostream>
#include <vector>
using namespace std;
/**
 * 求数组中，两数之和等于给定数字的索引。
 */
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    size_t size = nums.size();
    vector<int> ret;

    for (int i = 0; i < size; i++)
    {
      for (int j = i + 1; j < size; j++)
      {
        if (target == nums[i] + nums[j])
        {
          ret.push_back(i);
          ret.push_back(j);
        }
      }
    }
    return ret;
  }
};

main()
{
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  Solution solut;
  vector<int> ret = solut.twoSum(nums, target);
  for (const int &r : ret)
  {
    cout << r << endl;
  }
}