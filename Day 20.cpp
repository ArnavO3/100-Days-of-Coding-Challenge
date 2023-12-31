// Question link: https://leetcode.com/problems/reverse-integer/description/

//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], 
//then return 0.
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
       int x1 = abs(x);
       long ans=0;
       while(x1!=0){
           int rem = x1%10;
           ans = ans*10 + rem;
           x1/=10;
       }
       if(ans > INT_MAX || ans < INT_MIN) return 0;
       if(x<0) return -ans;
       return ans;
    }
};
