#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findCeilAndFloor(vector<int> &nums, int num) {
  if (nums.empty())
    return {-1, -1};

  sort(nums.begin(), nums.end());

  int n = nums.size();
  int floor = -1;
  int ceil = -1;

  int start = 0, end = n - 1;
  while (start <= end) {
    int mid = start + (end - start);

    if (nums[mid] == num) {
      return {num, num};
    } else if (nums[mid] < num) {
      floor = nums[mid];
      start = mid + 1;
    } else {
      ceil = nums[mid];
      end = mid - 1;
    }
  }

  return {floor, ceil};
}

void printArray(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {7, 10, 12, 15, 20};

  cout << "Original array: ";
  printArray(nums);

  int n;
  cout << "Enter a number: ";
  cin >> n;

  pair<int, int> result = findCeilAndFloor(nums, n);

  if (result.first == -1) {
    cout << "Floor: No floor exists" << endl;
  } else {
    cout << "Floor: " << result.first << endl;
  }

  if (result.second == -1) {
    cout << "Ceil: No ceil exists" << endl;
  } else {
    cout << "Ceil: " << result.second << endl;
  }

  return 0;
}
