#include <iostream>

using namespace std;

int findSqaureRoot(int num) {
  if (num == 0 || num == 1)
    return num;

  long long start = 1, end = num;
  long long result = 0;

  while (start <= end) {
    long long mid = start + (end - start) / 2;
    long long sqaure = mid * mid;

    if (sqaure == num) {
      return mid;
    } else if (sqaure < num) {
      result = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return result;
}

int main(int argc, char *argv[]) {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  int result = findSqaureRoot(num);
  cout << "The sqaure root of " << num << " is " << result << endl;
  return 0;
}
