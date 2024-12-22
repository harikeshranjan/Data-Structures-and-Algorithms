#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void reverseWords(string &str) {
  if (str.empty())
    return;

  reverse(str.begin(), str.end());

  int start = 0;
  int n = str.length();

  for (int end = 0; end <= n; end++) {
    if (str[end] == ' ' || end == n) {
      reverse(str.begin() + start, str.begin() + end);
      start = end + 1;
    }
  }
}

int main(int argc, char *argv[]) {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  reverseWords(str);
  cout << "Modified string is: " << str << endl;
  return 0;
}
