#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string &str) {
  if (str.empty())
    return false;

  int left = 0, right = str.size() - 1;
  while (left <= right) {
    if (str[left] != str[right])
      return false;
    left++;
    right--;
  }

  return true;
}

int main(int argc, char *argv[]) {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  bool ans = isPalindrome(str);
  if (ans) {
    cout << "Yes, the string is palindrome";
  } else {
    cout << "No, the string is not palindrome";
  }
  return 0;
}
