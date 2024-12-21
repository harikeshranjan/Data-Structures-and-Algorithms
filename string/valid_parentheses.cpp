#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValidParentheses(string s) {
  if (s.empty())
    return false;

  stack<int> temp;

  for (char c : s) {
    if (c == '(' || c == '[' || c == '{') {
      temp.push(c);
    } else if (c == ')' || c == ']' || c == '}') {
      if (temp.empty())
        return false;

      char top = temp.top();
      if ((c == ')' && top == '(') || (c == ']' && top == '[') ||
          (c == '}' && top == '{')) {
        temp.pop();
      } else {
        return false;
      }
    }
  }

  return temp.empty();
}

int main(int argc, char *argv[]) {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  bool ans = isValidParentheses(str);
  if (ans) {
    cout << "Yes, the string is valid parentheses" << endl;
  } else {
    cout << "No, the string is not a valid parentheses" << endl;
  }
  return 0;
}
