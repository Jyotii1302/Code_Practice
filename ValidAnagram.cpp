***BRUTE FORCE APPROACH***

#include<iostream>
#include<algorithm>
using namespace std;

bool areAnagrams(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
        
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1==s2;
    }
}

*** OPTIMIZED APPROACH ***

class Solution {
public:
    bool isAnagram(string s, string t) {
    if (s.length() != t.length()) return false; 
    int freq1[26] = {0}; 
    int freq2[26] = {0}; 
  
    for (int i = 0; i < s.length(); i++) {
        freq1[s[i] - 'a']++; 
        freq2[t[i] - 'a']++; 
    }

    
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) return false;
    }

    return true;
}
};
  
