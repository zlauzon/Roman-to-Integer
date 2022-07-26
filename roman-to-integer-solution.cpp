/*
* author: zachary lauzon
* date: 2022-07-22
*/

class Solution {
public:  
    int romanToInt(string s) {
        int num = 0;
        char lastChar = '\0';
        // We add full value of letters regardless and retroactively subtract through double the regular modifying prefix character.
        for (char letter : s){
            if (letter == 'M') {
                num += 1000;
                if (lastChar == 'C') num -= 200;
            }
            if (letter == 'D') {
                num += 500;
                if (lastChar == 'C') num -= 200;
            }
            if (letter == 'C') {
                num += 100;
                if (lastChar == 'X') num -= 20;
            }
            if (letter == 'L') {
                num += 50;
                if (lastChar == 'X') num -= 20;
            }
            if (letter == 'X') {
                num += 10;
                if (lastChar == 'I') num -= 2;
            }
            if (letter == 'V') {
                num += 5;
                if (lastChar == 'I') num -= 2;
            }
            if (letter == 'I') num++;
            lastChar = letter;
        }
        return num;
    }
};
