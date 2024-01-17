// Longest Substring Without Repeating Characters

// Given a string s, find the length of the longest 
// substring
//  without repeating characters.

 

// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

// Constraints:

// 0 <= s.length <= 5 * 104
// s consists of English letters, digits, symbols and spaces.

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int ans=0;
       
       for(int i=0;i<s.length();i++){
           map<char,int> freq;
           int count=0;
           for(int j=i;j<s.length();j++){
               if(freq.find(s[j])==freq.end()){
                   freq[s[j]]=j;
                   count++;
                   ans = max(ans, count);
               }
               else{
                   i = freq[s[j]] + 1; // Move the starting pointer to the next index of the repeated character
                   break;
               }
           }
       }
       
       return ans;
    }
};
