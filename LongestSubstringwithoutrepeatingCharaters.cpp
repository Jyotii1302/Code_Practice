int lengthOfLongestSubstring(string s) {
        int freq[256]={0};
        int left=0, right=0, maxlength=0;

        while(right <s.length()){
            freq[s[right]]++;

            while(freq[s[right]]>1){
                freq[s[left]]--;
                left++;
            }
            maxlength= max(maxlength, right -left+1);
            right++;
        }
        return maxlength;

    }
};
