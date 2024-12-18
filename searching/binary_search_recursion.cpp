#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &nums, int start, int end, int key) {
  if (start > end)
    return -1;

  int mid = start + (end - start) / 2;

  if (nums[mid] == key) {
    return mid;
  } else if (nums[mid] > key) {
    return binarySearch(nums, start, mid - 1, key);
  } else {
    return binarySearch(nums, mid + 1, end, key);
  }
}

void printArray(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {10, 21, 1, -3, 9, 4, 34};

  sort(nums.begin(), nums.end());

  cout << "Sorted array: ";
  printArray(nums);

  int key;
  cout << "Enter the key: ";
  cin >> key;

  int ans = binarySearch(nums, 0, nums.size() - 1, key);
  if (ans == -1)
    cout << "Key not present in the array" << endl;
  else
    cout << "Key is present in the array at index " << ans << endl;
  return 0;
}
