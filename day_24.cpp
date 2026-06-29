#include <bits/stdc++.h>
using namespace std;

//Q93 Write a program to Check string rotation.
bool stringRotation(string s, string goal){ //O(n^2)
    int n=s.length();
    int m=goal.length();

    if(n != m) return false;
    if(s == goal) return true;

    int i=1;
    while(i<n){ //O(n)
        rotate(s.begin(), s.begin()+1, s.end()); ////O(n)
        if(s == goal) return true; //O(n)
        i++;
    }
    return false;

}

//Q94 Write a program to Compress a string.
string compress_String(string s){

    string ans = "";
    ans += s[0];
    
    int i=1, count=1;

    while(s[i] != '\0'){
        if(s[i] == s[i-1]){ //counts consecutive freq
            count++;
        }
        else{
            if(count>1){ //adds consecutive freq
                ans += to_string(count);
            }
            ans += s[i];
            count=1;
        }
        i++;
    }
    if(count>1) ans+=to_string(count); //for last same string's freq

    return ans;
}

//Q95 Write a program to Find longest word.
string longestWord(string s){
    string ans;
    string ref;
    
    int i=0, maxLen=0, len=0;
    while(s[i] != '\0'){

        if(s[i]!=' '){ //counts current word freq and storing in ref
            ref+=s[i];
            len++;
        }
        if(s[i]==' ' || s[i+1]=='\0'){
            if(maxLen<len){ //compares with prev val of ans
                ans.clear();
                ans+=ref;
                ref.clear();
            }
        }
        i++;
    }
    return ans;
}

//Q96 Write a program to Remove duplicate characters.
string removeduplicate(string s){
    string ans;
    unordered_map <char, int> mp;

    int i=0;
    while(s[i] != '\0'){
        if(mp.find(s[i]) == mp.end()){ //notFound -> unique
            mp[s[i]]++;
            ans+=s[i];
        }
        i++;
    }
    return ans;
}

int main(){
    //Q93.
    cout<<stringRotation("abcde", "cdeab")<<endl; 
    cout<<stringRotation("HELLO", "OLELH")<<endl<<endl; 
    
    //Q94.
    cout<<compress_String("aaabbcdddaa")<<endl;
    cout<<compress_String("a")<<endl<<endl; 

    //Q95.
    cout<<longestWord("Hello world of programming!")<<endl;
    cout<<longestWord("hello")<<endl<<endl; 

    //Q96.
    cout<<removeduplicate("programming")<<endl;
    cout<<removeduplicate("banana")<<endl<<endl;

    return 0;
}
