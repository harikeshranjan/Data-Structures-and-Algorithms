#include <algorithm>
#include <iostream>
#include <unordered_map>
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
  vector<int> nums = {8, 1, 2, 2, 3};
  vector<int> sortedNums = nums;
  unordered_map<int, int> countMap;

  cout << "Original array: ";
  printArray(nums);

  quickSort(sortedNums, 0, sortedNums.size() - 1);

  for (int i = 0; i < sortedNums.size(); i++) {
    if (countMap.find(sortedNums[i]) == countMap.end()) {
      countMap[sortedNums[i]] = i;
    }
  }

  vector<int> result;
  for (int num : nums) {
    result.push_back(countMap[num]);
  }

  cout << "Number than the current number: ";
  printArray(result);
  return 0;
}
