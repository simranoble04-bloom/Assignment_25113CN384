#include <bits/stdc++.h>
using namespace std;


int main(){

    //Q85 Write a program to Check palindrome string.
    string s1 = "Hello World!";
    string s2 = s1;
    reverse(s2.begin(), s2.end()); //reverse
    s1 == s2 ? cout<<"Yes!\n" : cout<<"No\n"; //compare

    
    //Q86 Write a program to Count words in a sentence.
    int count = 0;
    int i = 0;
    
    while(s1[i] != '\0'){
        if(s1[i] != ' ' && (i == 0 || s1[i-1] == ' ')){
            count++;
        }
        i++;
    }
    cout << "Number of words = " << count;


    //Q87 Write a program to Character frequency.

    //Approach 1. (vector -> sort func -> emplacing alph+freq in PAIR )
    string s3 = "hello";

    vector <char> vec_s3; //string -> vector
    for(auto val : s3){
        if(val != ' ' && val != '\0') vec_s3.push_back(val);
    }
    sort(vec_s3.begin(), vec_s3.end()); //sort -> similar alph. together

    vector <pair<char, int>> charFreq;

    char start = vec_s3[0];
    int freq = 1;

    for(int i=1; i<vec_s3.size(); i++){
        if(start == vec_s3[i]) freq++;
        else{
            charFreq.emplace_back(start, freq);
            start = vec_s3[i];
            freq=1;
        }
    }
    charFreq.emplace_back(start, freq); //for last occuring alph.

    for(auto itr : charFreq){
        cout<<itr.first<<" "<<itr.second<<endl;
    }cout<<"\n";

    //Approach 2
    string s4 = "Hello World!";
    map <char, int> alphFreq;

    for(char alph : s4){
        if(alph != ' ' && alph != '\0'){
            alphFreq[alph]++;
        }
    }

    for(auto val : alphFreq){
        cout<<val.first<<" "<<val.second<<"\n";
    }


    //Q88 Write a program to Remove spaces from string.
    string s5 = "he llo,  Wor ld";
    s5.erase(remove(s5.begin(), s5.end(), ' '), s5.end()); //remove() -> formats the string : words->(itr)spaces
    cout<<s5<<endl;


    return 0;
}
