#include <iostream>
using namespace std;

/**
 * 输出1、2、3、4所组成的不同三位数
 * 并统计个数
 */

int main() {
  int n = 0;
  for (int i = 1; i < 5; i++) {
    for (int j = 1; j < 5; j++) {
      for (int k = 1; k < 5; k++) {
        if (i != j && i != k && j != k) {
          cout << i << j << j << endl;
          n++;
        }
      }
    }
  }
  cout << "n = " << n << endl;
  return 0;
}