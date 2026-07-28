class Solution {
        public:
            bool isPalindrome(int x) {
                //best time complexity
                if (x < 0 || (x % 10 == 0 && x != 0)) {
                    return false;
                }
                // reversing only the half of the number
                int reversedHalf = 0;
                while (x > reversedHalf) {
                    reversedHalf = reversedHalf * 10 + x % 10;
                    x /= 10;
                }
                //if half reversed number and original half are same then it is a palindrome
        
                return (x == reversedHalf || x == reversedHalf / 10);
            }
        };
