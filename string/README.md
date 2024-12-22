# String

## Table of Contents

1. [Introduction to String](#introduction-to-string)
2. [Declaration of String](#declaration-of-string)
3. [Initialization of String](#initialization-of-string)
4. [String Operations](#string-operations)
5. [String Input/Output](#string-inputoutput)
6. [Practice Problems](#practice-problems)
7. [DSA Problems on String](#dsa-problems-on-string)
8. [References](#references)

## Introduction to String

A string is a sequence of characters. In C++, a string is a class that represents a sequence of characters. It is a standard library class defined in the string header file. The string class is part of the C++ standard library. The string class is a container class that stores a sequence of characters. The string class provides various member functions to perform string operations.

## Declaration of String

The string class is defined in the string header file. To use the string class, you need to include the string header file in your program. The string class is defined in the std namespace. You can use the string class by using the std::string class.

```cpp
#include <string>
using namespace std;

int main() {
    string str;
    return 0;
}
```

## Initialization of String

You can initialize a string in C++ in the following ways:

1. Using a string literal
2. Using a character array
3. Using a string object

```cpp
#include <string>
using namespace std;

int main() {
    // Using a string literal
    string str1 = "Hello, World!";

    // Using a character array
    char ch[] = "Hello, World!";
    string str2(ch);

    // Using a string object
    string str3 = string("Hello, World!");

    return 0;
}
```

## String Operations

The string class provides various member functions to perform string operations. Some of the commonly used member functions of the string class are:

1. `length()`: Returns the length of the string.
2. `size()`: Returns the size of the string.
3. `append()`: Appends a string to the end of the string.
4. `insert()`: Inserts a string into the string at a specified position.
5. `erase()`: Erases a part of the string.
6. `replace()`: Replaces a part of the string with another string.
7. `find()`: Finds a substring in the string.
8. `substr()`: Returns a substring of the string.
9. `compare()`: Compares two strings.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hello, World!";

    // Length of the string
    cout << "Length of the string: " << str.length() << endl;

    // Append a string
    str.append(" Welcome to C++");
    cout << "Appended string: " << str << endl;

    // Insert a string
    str.insert(7, "C++ Programming ");
    cout << "Inserted string: " << str << endl;

    // Erase a part of the string
    str.erase(7, 12);
    cout << "Erased string: " << str << endl;

    // Replace a part of the string
    str.replace(7, 11, "C++ Programming");
    cout << "Replaced string: " << str << endl;

    // Find a substring
    size_t pos = str.find("Programming");
    if (pos != string::npos) {
        cout << "Substring found at position: " << pos << endl;
    } else {
        cout << "Substring not found" << endl;
    }

    // Substring of the string
    string substr = str.substr(7, 11);
    cout << "Substring: " << substr << endl;

    // Compare two strings
    string str1 = "Hello, World!";
    string str2 = "Hello, World!";
    if (str1.compare(str2) == 0) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}
```

## String Input/Output

You can input and output strings in C++ using the `cin` and `cout` objects. You can use the `getline()` function to input a string with spaces.

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    // Input a string
    cout << "Enter a string: ";
    getline(cin, str);

    // Output a string
    cout << "You entered: " << str << endl;

    return 0;
}
```

## Practice Problems

1. Write a program to reverse a string.
2. Write a program to check if a string is a palindrome.
3. Write a program to count the number of vowels and consonants in a string.
4. Write a program to check if two strings are anagrams.
5. Write a program to find the longest common prefix in an array of strings.

## DSA Problems on String

1. [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/)
2. [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/)
3. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)
4. [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/)
5. [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/)
6. [Implement strStr()](https://leetcode.com/problems/implement-strstr/)
7. [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/)
8. [Group Anagrams](https://leetcode.com/problems/group-anagrams/)
9. [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/)
10. [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/)
11. [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/)
12. [Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/)
13. [Repeated Substring Pattern](https://leetcode.com/problems/repeated-substring-pattern/)
14. [Longest Substring with At Most Two Distinct Characters](https://leetcode.com/problems/longest-substring-with-at-most-two-distinct-characters/)
15. [Longest Substring with At Least K Repeating Characters](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/)
16. [Minimum Remove to Make Valid Parentheses](https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/)
17. [Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)
18. [Minimum Window Subsequence](https://leetcode.com/problems/minimum-window-subsequence/)
19. [Longest Chunked Palindrome Decomposition](https://leetcode.com/problems/longest-chunked-palindrome-decomposition/)
20. [Minimum Length of String After Deleting Similar Ends](https://leetcode.com/problems/minimum-length-of-string-after-deleting-similar-ends/)

## References

1. [C++ String](https://www.programiz.com/cpp-programming/string)
2. [C++ String Class](https://www.geeksforgeeks.org/c-string-class-and-its-applications/)
3. [C++ String](https://www.javatpoint.com/cpp-strings)
4. [C++ String](https://www.tutorialspoint.com/cplusplus/cpp_strings.htm)
