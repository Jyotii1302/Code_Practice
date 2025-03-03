***BRUTE FORCE CODE***

#include<iostream>
using namespace std;

char FirstRepeatingChar(string s){
    int n= s.length();

    for(int i=0; i<n;i++){
        for(int j=0;j<i;j++){
            if(s[i]==s[j]){
                return s[i];
            }
        }
    }
    return 0;
}
int main(){

    string str;

    cout<<"Enter a string!";
    cin>>str;

    char result= FirstRepeatingChar(str);

    if(result!='\0'){
        cout<<"The first repeating character in the string is" << result;
    }
    else{
        cout<<"No repeating character found";
    }
    return 0;

}

***OPTIMIZED APPROACH***
char FirstRepeatingChar(string s){
    int freq[26]={0};

    for(int i=0; i<s.length(); i++){
        char c=s[i];
        int index= c-'a';

        if(freq[index]>0){
            return c;
        }
        freq[index]++;
    }
    return 0;
}
int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    char result=FirstRepeatingChar(str);
    if (result != '\0')
        cout << "First repeating character: " << result << endl;
    else
        cout << "No repeating characters found." << endl;

    return 0;

}








