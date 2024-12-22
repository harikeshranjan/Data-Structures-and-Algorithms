#include <iostream>
#include <string>

using namespace std;

pair<int, int> expandAroundCenter(string &s, int start, int end) {
  while (start >= 0 && end < s.length() && s[start] == s[end]) {
    start--;
    end++;
  }

  return {start + 1, end - 1};
}

string longestPalindrome(string &s) {
  if (s.length() < 2)
    return s;

  int start = 0, maxLength = 1;

  for (int i = 0; i < s.length(); i++) {
    // for odd palindrome
    pair<int, int> odd = expandAroundCenter(s, i, i);
    if (odd.second - odd.first + 1 > maxLength) {
      start = odd.first;
      maxLength = odd.second - odd.first + 1;
    }

    // for even palindrome
    pair<int, int> even = expandAroundCenter(s, i, i + 1);
    if (even.second - even.first + 1 > maxLength) {
      start = even.first;
      maxLength = even.second - even.first + 1;
    }
  }

  return s.substr(start, maxLength);
}

int main() {
  string s;
  cout << "Enter a string: ";
  getline(cin, s);

  string result = longestPalindrome(s);
  cout << "Longest palindromic substring: " << result << endl;
  cout << "Length: " << result.length() << endl;

  return 0;
}
