#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void reverseString(string &str) {
  if (str.empty())
    return;

  int left = 0, right = str.size() - 1;
  while (left < right) {
    swap(str[left], str[right]);
    left++;
    right--;
  }
}

int main(int argc, char *argv[]) {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  reverseString(str);
  cout << "The reversed string is: " << str << endl;
  return 0;
}
