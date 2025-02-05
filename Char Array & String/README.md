# Char Array & String

## Char Array
Char array is a `data structure` that used to store a `sequence of characters`. It is a `contiguous memory block` that stores characters. It is a `primitive` data type in C and C++.
- **Syntax**: `char arrayName[size];`
- **Example**: `char str[6] = "Hello";`
- **User Input**: there are 2 ways to take input from user:
    - `cin >> str[0];`
    - `cin >> str;`
- **Null Character**: When we take input sequence of characters at same time, a null character `\0` is automatically added at the end of the char array. It is used to indicate the `end` of the string. It is not counted in the length of the string.
- **Problem**: There an sequence of characters is stored in an array, it display fully with space in middle(if any), but when we take input the char array, it only take the `first word` and ignore the rest of the words. beacause `cin` in cpp is read input till `delemiting characters` (`space`, `tab` or `newline`).
    - **Example**: `cin >> str;` if we input `Hello World`, it will only take `Hello` and ignore `World`. 
- **Solution**: to take input of full line of characters:
    - `cin.ignore();` to ignore the newline character.
    - `cin.getline(str, size);` to take input of full line of characters.

### Questions
- Length of a char array: [Solution](./basics.cpp)
- Reverse a char array: [Solution](./basics.cpp)
- Replace a character in a char array: [Solution](./basics.cpp)
- Check if a char array is palindrome: [Solution](./palindrome.cpp)
- Convert a char array to uppercase and lowercase: [Solution](./caseConverting.cpp)

## String
It is a `data type` in C++ to store a sequence of characters. It is a `class` in c++ that is defined in `#include <string>` header file. It is a `dynamic array` that can `grow or shrink` in size. It is more flexible than char array.
- **Syntax**: `string str = "Hello";`
- **User Input**: There are 2 ways to take input from user:
    - `cin >> str;`
    - `getline(cin, str);`
- In String, null character is automatically added at the end of the string.
- **String Functions**:
    - `str.length()`: return the length of the string.
    - `str.size()`: return the size of the string.
    - `str.empty()`: return true if the string is empty.
    - `str.push_back('c')`: add a character at the end of the string.
    - `str.pop_back()`: remove the last character from the string.
    - `str.substr(StartIndex, Length)`: return a substring of the string from start index to length.
    - `str.erase(StartIndex, LastIndex)`: remove the characters from start index to last index.
    - `str.stoi()`: convert string to integer.
    - `str.compare(str2)`: compare two strings.
    - `str.find("substring")`: find a substring in the string.
    - `str.replace(StartIndex, Length, "newString")`: replace the substring from start index to length with new string.
    - [Implementations](./stringStlFunctions.cpp)
    - [User Defined Functions](./stringStlFunctionsImplementation.cpp)

## Char Array vs String
| Char Array | String |
| --- | --- |
| primitive data type. | class in C++. |
| static array. | dynamic array. |
| contiguous memory block. | contiguous memory block. |
| sequence of characters. | sequence of characters. |
| fixed size. | dynamic size. |
| less flexible. | more flexible. |
| less secure. | more secure. |
| less efficient. | more efficient. |

## Problems
- [1047. Remove All Adjacent Duplicates In String](https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/) => [Solution](./removeAdjacentDuplicates.cpp)
- [1910. Remove All Occurrences of a Substring](https://leetcode.com/problems/remove-all-occurrences-of-a-substring/description/) => [Solution](./removeAllOcuurenceOfSubstr.cpp)
- [680. Valid Palindrome II](https://leetcode.com/problems/valid-palindrome-ii/description/) => [Solution](./validPalindrome2.cpp)
- [539. Minimum Time Difference](https://leetcode.com/problems/minimum-time-difference/description/) => [Solution](./minTimeDifference.cpp)
- [647. Palindromic Substrings](https://leetcode.com/problems/palindromic-substrings/description/) => [Solution](./PalindromicSubstrings.cpp)
- [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/description/) => [Solution](./validAnagram.cpp)
- [917. Reverse Only Letters](https://leetcode.com/problems/reverse-only-letters/description/) => [Solution](./reverseOnlyLetters.cpp)
- [14. Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/description/) => [Solution](./longestCommonPrefix.cpp)
- [345. Reverse Vowels of a String](https://leetcode.com/problems/reverse-vowels-of-a-string/description/) => [Solution](./reverseVowels.cpp)
- [767. Reorganize String](https://leetcode.com/problems/reorganize-string/description/) => [Solution](./reorganizeString.cpp)
- [205. Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/description/) => [Solution](./isomorphicString.cpp)
- [49. Group Anagram](https://leetcode.com/problems/group-anagrams/description/) => [Solution](./groupAnagrams.cpp)
- [5. Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring/description/) => [Solution](./longestPalindromic.cpp)
- [28. Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/) => [Solution](./findFirstOcc.cpp)
- [8. String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/description/)
- [12. Integer to Roman](https://leetcode.com/problems/integer-to-roman/description/) => [Solution](./intToRoman.cpp)
- [6. Zigzag Conversion](https://leetcode.com/problems/zigzag-conversion/description/) => [Solution](./zigzagConversion.cpp) 
- [179. Largest Number](https://leetcode.com/problems/largest-number/description/)
- [791. Custom Sort String](https://leetcode.com/problems/custom-sort-string/description/)
- [953. Verifying an Alien Dictionary](https://leetcode.com/problems/verifying-an-alien-dictionary/description/)
- [524. Longest Word in Dictionary through Deleting](https://leetcode.com/problems/longest-word-in-dictionary-through-deleting/description/)