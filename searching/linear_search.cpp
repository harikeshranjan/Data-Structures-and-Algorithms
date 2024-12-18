#include <iostream>
#include <vector>

using namespace std;

int linearSearch(vector<int> &nums, int key) {
  if (nums.empty())
    return -1;

  int n = nums.size();
  for (int i = 0; i < n; i++) {
    if (nums[i] == key) {
      return i;
      break;
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

  int key;
  cout << "Enter the key: ";
  cin >> key;

  int ans = linearSearch(nums, key);
  if (ans == -1)
    cout << "Key not present in the array" << endl;
  else
    cout << "Key is present at index " << ans << endl;
  return 0;
}
