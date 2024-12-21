#include <algorithm>
#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

pair<int, int> countVowelAndConsonants(string &str) {
  if (str.empty())
    return {0, 0};

  int n = str.size();
  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  int vowel = 0, consonant = 0;
  transform(str.begin(), str.end(), str.begin(), ::tolower);

  for (int i = 0; i < n; i++) {
    if (isalpha(str[i])) {
      if (find(vowels.begin(), vowels.end(), str[i]) != vowels.end()) {
        vowel++;
      } else {
        consonant++;
      }
    }
  }

  return {vowel, consonant};
}

int main(int argc, char *argv[]) {
  string str;
  cout << "Enter a string: ";
  getline(cin, str);

  pair<int, int> result = countVowelAndConsonants(str);

  int vowel = result.first;
  int consonant = result.second;

  cout << "Vowel: " << vowel << " Consonant: " << consonant << endl;
  return 0;
}
