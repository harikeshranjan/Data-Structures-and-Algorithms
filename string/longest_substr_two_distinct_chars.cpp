#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int lengthOfLongestSubstrTwoDistinct(string s) {
  vector<int> count(128, 0);
  int distinct = 0, start = 0, maxLength = 0;

  for (int end = 0; end < s.length(); end++) {
    if (count[s[end]]++ == 0) {
      distinct++;
    }

    while (distinct > 2) {
      if (--count[s[start]] == 0) {
        distinct--;
      }
      start++;
    }

    maxLength = max(maxLength, end - start + 1);
  }

  return maxLength;
}

int main(int argc, char *argv[]) {
  string s;
  cout << "Enter a string: ";
  getline(cin, s);

  int result = lengthOfLongestSubstrTwoDistinct(s);
  cout << "The length is: " << result << endl;
  return 0;
}
