#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string &str1, string &str2) {
  if (str1.empty() || str2.empty())
    return false;

  unordered_map<char, int> countMap;

  for (char c : str1) {
    countMap[c] += 1;
  }

  for (char c : str2) {
    countMap[c] -= 1;
  }

  for (auto &pair : countMap) {
    if (pair.second != 0) {
      return false;
    }
  }

  return true;
}

int main(int argc, char *argv[]) {
  string str1, str2;
  cout << "Enter a string: ";
  getline(cin, str1);

  cout << "Enter another string: ";
  getline(cin, str2);

  bool ans = isAnagram(str1, str2);
  if (ans) {
    cout << "Yes, the string is an anagram";
  } else {
    cout << "No, the string is not an anagram";
  }
  return 0;
}
