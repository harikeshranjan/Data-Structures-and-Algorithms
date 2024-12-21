#include <climits>
#include <iostream>
#include <string>
using namespace std;

int stringToInteger(string s) {
  int i = 0, n = s.size();

  // Skipping the whitespace
  while (i < n && s[i] == ' ') {
    i++;
  }

  // Check if we've reached the end
  if (i >= n)
    return 0;

  int sign = 1;
  if (s[i] == '+' || s[i] == '-') {
    sign = (s[i] == '+') ? 1 : -1;
    i++;
  }

  long result = 0;
  while (i < n && isdigit(s[i])) {
    result = result * 10 + (s[i] - '0');

    if (sign == 1 && result > INT_MAX)
      return INT_MAX;
    if (sign == -1 && result < INT_MIN)
      return INT_MIN;

    i++;
  }

  return sign * result;
}

int main(int argc, char *argv[]) {
  string s;
  cout << "Enter a string: ";
  getline(cin, s);

  int ans = stringToInteger(s);
  cout << "The result is " << ans << endl;
  return 0;
}
