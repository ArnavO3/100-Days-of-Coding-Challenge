// Question link: https://leetcode.com/problems/sort-vowels-in-a-string/description/

//Given a 0-indexed string s, permute s to get a new string t such that:
//All consonants remain in their original places. More formally, if there is an index i with 0 <= i < s.length such that s[i] is a consonant, then t[i] = s[i].
//The vowels must be sorted in the nondecreasing order of their ASCII values. More formally, for pairs of indices i, j with 0 <= i < j < s.length such that s[i] 
//and s[j] are vowels, then t[i] must not have a higher ASCII value than t[j].
//Return the resulting string.
//The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in lowercase or uppercase. Consonants comprise all letters that are not vowels.
                        
class Solution {
public:
    string sortVowels(string s) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(auto x : s){
            if(x == 'a' ||x == 'e' ||x == 'i' ||x == 'o' ||x == 'u' ||x == 'A' ||x == 'E' ||x == 'I' ||x == 'O' ||x == 'U') pq.push(x);
        }
        string ans;
        for(auto c : s){
            if(c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' ||c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U'){
                ans.push_back(pq.top());
                pq.pop();
            }
            else ans.push_back(c);
        }
        return ans;
    }
};
