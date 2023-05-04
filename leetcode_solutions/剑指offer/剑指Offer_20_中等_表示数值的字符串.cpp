//
// Created by fang on 2023/5/4.
//


#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isNumber(string s) {
        //去掉首尾空格
        int i = 0;
        while (i < s.size() && s[i] == ' ')
            i++;
        s = s.substr(i);
        while (s.back() == ' ')
            s.pop_back();

        bool numFlag = false;
        bool dotFlag = false;
        bool eFlag = false;
        for (int i = 0; i < s.size(); i++) {
            // 判定为数字，则标记numFlag
            if (isdigit(s[i])) {
                numFlag = true;
            }
                // 判定为'.'需要没出现过'.'并且没出现过'e'
            else if (s[i] == '.' && !dotFlag && !eFlag) {
                dotFlag = true;
            }
                // 判定为'e'，需要没出现过'e'，并且出现过数字
            else if ((s[i] == 'e' || s[i] == 'E') && !eFlag && numFlag) {
                eFlag = true;
                numFlag = false; // 'e'后面必须跟着一个整数，所以出现'e'之后就标志为false
            }
                // 判定为'+''-'符号，只能出现在第一位或者紧接'e'后面
            else if ((s[i] == '+' || s[i] == '-') && (i == 0 || s[i - 1] == 'e' || s[i - 1] == 'E')) {

            }
                // 其他情况，都是非法的
            else {
                return false;
            }
        }
        return numFlag;
    }
};