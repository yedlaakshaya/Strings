class Solution {
public:
    int myAtoi(string s) {
        int i = 0;
        int n = s.size();
        int sign = 1;
        long long ans = 0;

        // 1. Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Check sign
        if (i < n && s[i] == '-') {
            sign = -1;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        // 3. Convert digits
        while (i < n && isdigit(s[i])) {
            ans = ans * 10 + (s[i] - '0');

            // 4. Check overflow
            if (sign == 1 && ans > INT_MAX) {
                return INT_MAX;
            }

            if (sign == -1 && -ans < INT_MIN) {
                return INT_MIN;
            }

            i++;
        }

        return sign * ans;
    }
};