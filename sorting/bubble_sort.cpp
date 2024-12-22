#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &nums) {
  int n = nums.size();
  bool swapped;

  for (int i = 0; i < n - 1; i++) {
    swapped = false;
    for (int j = 0; j < n - 1; j++) {
      if (nums[i] < nums[j]) {
        swap(nums[i], nums[j]);
        swapped = true;
      }
    }

    if (!swapped) {
      break;
    }
  }
}

int main(int argc, char *argv[]) {
  vector<int> nums = {6, -2, 17, 2, 20};

  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;

  bubbleSort(nums);

  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}
