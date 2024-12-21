#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int lengthOfLongestSubstring(string &s) {
  if (s.empty())
    return 0;

  int start = 0, maxLength = 0;
  vector<int> lastSeen(256, -1);

  for (int end = 0; end < s.size(); end++) {
    if (lastSeen[s[end]] >= start) {
      start = lastSeen[s[end]] + 1;
    }

    lastSeen[s[end]] = end;
    maxLength = max(maxLength, end - start + 1);
  }

  return maxLength;
}

int main(int argc, char *argv[]) {
  string s;
  cout << "Enter a string: ";
  getline(cin, s);

  int result = lengthOfLongestSubstring(s);
  cout << "Length of longest substring without repeating characters: " << result
       << endl;
  return 0;
}
