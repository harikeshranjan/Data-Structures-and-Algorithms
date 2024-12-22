#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int> &nums, int low, int high) {
  int pivot = nums[high];
  int i = low - 1;

  for (int j = low; j < high; j++) {
    if (nums[j] <= pivot) {
      i++;
      swap(nums[i], nums[j]);
    }
  }

  swap(nums[i + 1], nums[high]);
  return (i + 1);
}

void quickSort(vector<int> &nums, int low, int high) {
  if (low < high) {
    int pivot = partition(nums, low, high);

    quickSort(nums, low, pivot - 1);
    quickSort(nums, pivot + 1, high);
  }
}

void printArray(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {10, 9, 7, 8, 1, 5};

  cout << "Original array: ";
  printArray(nums);

  quickSort(nums, 0, nums.size() - 1);
  cout << "Sorted array: ";
  printArray(nums);
  return 0;
}
