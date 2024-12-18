#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void sortColor(vector<int> &nums) {
  if (nums.empty())
    return;

  int low = 0;
  int mid = 0;
  int high = nums.size() - 1;

  while (mid <= high) {
    switch (nums[mid]) {
    case 0:
      swap(nums[low], nums[mid]);
      low++;
      mid++;
      break;
    case 1:
      mid++;
      break;
    case 2:
      swap(nums[mid], nums[high]);
      high--;
      break;
    }
  }
}

void printArray(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {1, 2, 0, 0, 1, 1, 2, 2};
  cout << "Original array: ";
  printArray(nums);

  sortColor(nums);
  cout << "Sorted colored array: ";
  printArray(nums);
  return 0;
}
