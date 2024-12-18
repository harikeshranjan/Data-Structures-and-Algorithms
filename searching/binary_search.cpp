#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &nums, int start, int end, int key) {
  if (nums.empty())
    return -1;

  int n = nums.size();
  start = 0, end = n - 1;

  while (start < end) {
    int mid = start + (end - start) / 2;

    if (nums[mid] == key) {
      return 1;
    } else if (nums[mid] > key) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  return -1;
}

void printArray(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {10, 21, 1, -3, 9, 4, 34};
  cout << "Original array: ";
  printArray(nums);

  sort(nums.begin(), nums.end());

  int key;
  cout << "Enter the key: ";
  cin >> key;

  int ans = binarySearch(nums, 0, nums.size() - 1, key);
  if (ans == -1)
    cout << "Key not present in the array" << endl;
  else
    cout << "Key is present in the array" << endl;
  return 0;
}
