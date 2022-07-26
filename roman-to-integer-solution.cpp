/*
* author: zachary lauzon
* date: 2022-07-22
*/

class Solution {
public:
  int romanToInt(string s) {
    int num = 0;
    char lastChar = 0;
    for (char letter : s) {
      switch (letter) {
        case 'M': num += 500;
        case 'D': num += 500 - lastChar == 'C' ? 200 : 0; break;
        case 'C': num += 50;
        case 'L': num += 50 - lastChar == 'X' ? 20 : 0; break;
        case 'X': num += 5;
        case 'V': num += 5 - lastChar == 'I' ? 2 : 0; break;
        case 'I': num += 1;
      }
      lastChar = letter;
    }
    return num;
  }
};
