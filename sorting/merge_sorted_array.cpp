#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeArray(vector<int> &nums1, vector<int> &nums2) {
  vector<int> result;
  int n1 = nums1.size(), n2 = nums2.size();
  int i = 0, j = 0;

  if (nums1.empty())
    return nums2;

  if (nums2.empty())
    return nums1;

  if (nums1.empty() && nums2.empty())
    return result;

  while (i < n1 && j < n2) {
    if (nums1[i] <= nums2[j]) {
      result.push_back(nums1[i]);
      i++;
    } else {
      result.push_back(nums2[j]);
      j++;
    }
  }

  while (i < n1) {
    result.push_back(nums1[i]);
    i++;
  }

  while (j < n2) {
    result.push_back(nums2[j]);
    j++;
  }

  return result;
}

void printArray(vector<int> &nums) {
  for (int num : nums) {
    cout << num << " ";
  }
  cout << endl;
}

int main(int argc, char *argv[]) {
  vector<int> nums1 = {7, 3, 5, 1};
  vector<int> nums2 = {4, 2, 6};

  cout << "Original array1: ";
  printArray(nums1);

  cout << "Original array2: ";
  printArray(nums2);

  sort(nums1.begin(), nums1.end());
  sort(nums2.begin(), nums2.end());

  vector<int> result = mergeArray(nums1, nums2);
  cout << "The merged and sorted array is: ";
  printArray(result);
  return 0;
}
