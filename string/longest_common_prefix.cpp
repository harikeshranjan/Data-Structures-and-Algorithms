#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string lowestCommonPrefix(vector<string> &strs) {
  if (strs.empty())
    return "";

  if (strs.size() == 1)
    return strs[0];

  int minLen = strs[0].size();
  for (string &str : strs) {
    minLen = min(minLen, (int)str.length());
  }

  for (int i = 0; i < minLen; i++) {
    char current = strs[0][i];
    for (string &str : strs) {
      if (str[i] != current) {
        return strs[0].substr(0, i);
      }
    }
  }

  return strs[0].substr(0, minLen);
}

int main(int argc, char *argv[]) {
  vector<string> strs = {"flower", "flow", "flight"};

  string result = lowestCommonPrefix(strs);
  cout << "The prefix: " << result << endl;
  return 0;
}
