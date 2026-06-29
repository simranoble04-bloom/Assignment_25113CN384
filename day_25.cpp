#include <bits/stdc++.h>
using namespace std;

//Q97 Write a program to Merge two sorted arrays.
vector <int> megreVector(vector <int> v1, vector <int> v2){
    v1.insert(v1.end(), v2.begin(), v2.end());
    sort(v1.begin(), v1.end());

    return v1;
}

//Q98 Write a program to Find common characters in strings.
string commonChar(string s1, string s2){
    sort(s1.begin(), s1.end());
    s1.erase((unique(s1.begin(), s1.end())), s1.end());
    sort(s2.begin(), s2.end());
    s2.erase((unique(s2.begin(), s2.end())), s2.end());

    string cmn = s1+s2;
    string ans;

    unordered_map <char, int> mp;

    for(char ch : cmn){
        mp[ch]++;
    }

    for(auto val : mp){
        if(val.second > 1){
            ans += (val.first);
        }
    }
    return ans;
}

//Q99 Write a program to Sort names alphabetically.
vector <string> orderNames(vector <string> names){
    sort(names.begin(), names.end());

    return names;
}

//Q100 Write a program to Sort words by length.
string sortWordsByLength(string sentence){

    //converts sentence into individual word
    stringstream ss(sentence);

    vector <string> words;
    string word;

    while(ss >> word){
        words.push_back(word);
    }

    //sort each word acc. to their length
    sort(words.begin(), words.end(), 
        [](const string& a, const string& b){
            return a.length() < b.length();
        });
    
    string ans;

    //storing final sorted words in ans_string
    for(int i=0; i<words.size(); i++){
        ans += words[i];
        if(i+1 != words.size()){
            ans += " ";
        }
    }
    return ans;
}


int main(){

    //Q97.
    vector <int> ans = megreVector({1, 2, 4, 5, 6}, {3, 7, 8, 9, 10});
    for(int val : ans){
        cout<<val<<"\t";
    }cout<<"\n\n";
    
    //98'
    cout<<commonChar("Hello", "Holiday")<<"\n\n";

    //Q99.
    vector <string> nameList = orderNames({"John", "Alice", "Bob", "Charlie"});
    for(string val : nameList){
        cout<<val<<"\n";
    }cout<<"\n";

    //Q100.
    string ans_word = sortWordsByLength("I love programming very much");
    cout<<ans_word<<"\n\n";

    return 0;
}
