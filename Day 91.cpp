// Question link: https://leetcode.com/problems/backspace-string-compare/?envType=daily-question&envId=2023-10-19

// Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.
// Note that after backspacing an empty text, the text will continue empty.

class Solution {
public:
    bool backspaceCompare(string S, string T) {
            
         stack <int> s1,s2;
         string str1,str2; 
            
         for(int i = 0; i < S.size(); i++){
             if(S[i] == '#' && !s1.empty()) s1.pop();
             else if(S[i] != '#') s1.push(S[i]);
         }
         for(int i = 0; i < T.size(); i++){
             if(T[i] == '#' && !s2.empty()) s2.pop();
             else if(T[i] != '#') s2.push(T[i]);
         }
         while(!s1.empty()){
                 str1.push_back(s1.top());
                 s1.pop();
         }
         while(!s2.empty()){
                 str2.push_back(s2.top());
                 s2.pop();
         }      
         return str1 == str2;   
    }
};
