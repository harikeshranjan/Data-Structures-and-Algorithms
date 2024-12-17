#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &nums) {
  int n = nums.size();

  for (int i = 0; i < n - 1; i++) {
    int min_ind = i;

    for (int j = i + 1; j < n; j++) {
      if (nums[j] < nums[min_ind]) {
        min_ind = j;
      }
    }

    swap(nums[i], nums[min_ind]);
  }
}

void printArray(vector<int> &arr) {
  for (int &val : arr) {
    cout << val << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> arr = {64, 25, 12, 22, 11};

  cout << "Original array: ";
  printArray(arr);

  selectionSort(arr);

  cout << "Sorted array: ";
  printArray(arr);

  return 0;
}
