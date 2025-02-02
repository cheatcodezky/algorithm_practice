#include<string>
using namespace std;

class Solution {
public:
	bool isPalindrome(string s) {
		int left = 0, right = s.length() - 1;
		if (s.length() <= 1)
			return true;
		while (left <= right) {
			while (left < s.length() && !isalnum(s[left]))
				left++;
			while (right >= 0 && !isalnum(s[right]))
				right--;
			if (left > right || left == s.length() || right < 0)
				break;
			if (tolower(s[left]) != tolower(s[right]))
				return false;
			left++;
			right--;
		}
		return true;
	}
};