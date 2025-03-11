***BRUTE FORCE APPROACH***

  class Solution {
public:
    int numberOfSubstrings(string s) {
        int n= s.length();
        int count=0;

        for(int i=0; i<n;i++){
            bool hasA= false, hasB=false, hasC= false;
            for(int j=i;j<n;j++){
                if(s[j]=='a') hasA=true;
                if(s[j]=='b')hasB=true;
                if(s[j]=='c')hasC=true;

                if(hasA && hasB && hasC){
                    count++;
                }
            }
        }
        return count;
        
    }
};


*** OPTIMIZED APPROACH(2 POINTER/ LIDING WINDOW APPROAH)

class Solution {
public:
    int numberOfSubstrings(string s) {
        int count[3]= {-1,-1,-1};
        int result=0; 

        for(int right=0; right<s.length();right++){

            count[s[right]-'a']=right;

            if(count[0] != -1 && count[1] != -1 && count[2] != -1 ){
                result += 1+min({count[0], count[1], count[2]});
            }
        }
        return result;
    }
};
