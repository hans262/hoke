#include <iostream>
#include <vector>
using namespace std;

/**
 * 给定一个数字等于数组中两数之和
 * 求数两数的索引
 */

struct Num {
  int n1;
  int n2;
};

class Solution {
 public:
  vector<Num> twoSumIndex(vector<int>& list, int target) {
    size_t size = list.size();
    vector<Num> ret;
    for (int i = 0; i < size; i++) {
      for (int j = i + 1; j < size; j++) {
        if (target == list[i] + list[j]) {
          Num num = {i, j};
          ret.push_back(num);
        }
      }
    }
    return ret;
  }
};

int main() {
  vector<int> list = {2, 7, 11, 10, 15, 2};
  int target = 17;

  Solution solut;
  vector<Num> ret = solut.twoSumIndex(list, target);

  for (const Num& s : ret) {
    cout << "[" << s.n1 << ", " << s.n2 << "]" << endl;
  }
}