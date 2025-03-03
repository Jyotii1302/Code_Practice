#include<iostream>
using namespace std;

char FirstRepeatingChar(string s){
    int n= s.length();

    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
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

