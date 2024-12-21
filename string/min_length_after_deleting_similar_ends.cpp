#include <iostream>
#include <string>
using namespace std;

int minimumLength(string s) {
  int left = 0;
  int right = s.length() - 1;

  while (left < right && s[left] == s[right]) {
    char current = s[left];

    while (left <= right && s[left] == current) {
      left++;
    }

    while (left <= right && s[right] == current) {
      right--;
    }
  }

  return right - left + 1;
}

int main() {
  string s;
  cout << "Enter string: ";
  cin >> s;

  int result = minimumLength(s);
  cout << "Minimum length after deletions: " << result << endl;

  return 0;
}
