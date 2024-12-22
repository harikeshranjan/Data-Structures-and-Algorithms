#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int> &nums) {
  int n = nums.size();

  for (int i = 1; i < n; i++) {
    int key = nums[i];
    int j = i - 1;

    while (j >= 0 && nums[j] > key) {
      nums[j + 1] = nums[j];
      j = j - 1;
    }

    nums[j + 1] = key;
  }
}

void printArray(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> nums = {12, 11, 13, 5, 6};

  cout << "Original array: ";
  printArray(nums);

  cout << "Sorted array: ";
  insertionSort(nums);
  printArray(nums);
  return 0;
}
