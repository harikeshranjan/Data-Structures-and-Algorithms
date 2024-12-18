#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {2, 1, 4, 3, 5, -1};
  cout << "Original array1: ";
  printArray(nums);

  sort(nums.begin(), nums.end());

  cout << "The largest number is: " << nums[nums.size() - 1];

  return 0;
}
