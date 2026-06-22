#include <bits/stdc++.h>
using namespace std;

//Q91 Write a program to Check anagram strings.
bool isAnagram(string s1, string s2){
    map <char, int> charFreq1;
    map <char, int> charFreq2;

    for(char ch1 : s1){
        charFreq1[ch1]++;
    }
    for(char ch2 : s2){
        charFreq2[ch2]++;
    }

    return charFreq1 == charFreq2 ? true : false;
}

int main(){

    //Q89. Write a program to Find first non-repeating character.

    //APPROACH 1 (Brute force -> Time complexity: O(n^2));
    string s2 = "ababbceed";

    int indx=-1;
    for(int i=0; i<s2.length(); i++){ //O(n)
        bool isFound = 0;

        for(int j=0; j<s2.length(); j++){ //O(n)
            if(s2[i]==s2[j] && i!=j){
                isFound = 1;
                break;
            }
        }
        if(!isFound){
            indx=i;
            break;
        }
    }
    
    indx == -1 ? cout<<"No non-repeating character found\n" : 
                 cout<<"Element found at indx: "<<indx<<" (the el is: "<<s2[indx]<<")\n";


    //APPROACH 2 (Time complexity: O(n^2))
    string s1 = "ababbceed";
    map <char, int> charFreq;

    for(char alph : s1){ //Count frequencies. //O(n)
        charFreq[alph]++;
    }

    //Find characters whose frequency is 1.
    vector <pair <int, char>> elIndx;

    for(auto freq : charFreq){//O(n)

        if(freq.second == 1){
            int i=0, indx;

            while(s1[i] != '\0'){ //O(n)
                if(s1[i] == freq.first){ //Find where each such character occurs in the original string.
                    indx=i;
                    break;
                }
                i++;
            }
            elIndx.emplace_back(indx, freq.first); //Pick the one with the smallest index.
        }
    }

    sort(elIndx.begin(), elIndx.end()); //O(n^2)
    cout<<"1st occuring singled frq el: "<<elIndx[0].second<<endl;

    //APPROACH 3 (Optimised approach -> Time complexity: O(n))
    string s3 = "ababbceed";

    unordered_map <char, int> alphFreq;

    for(char ch : s3){
        alphFreq[ch]++;
    }

    char ans = '\0';
    for(char ch : s3){
        if(alphFreq[ch] == 1){
            ans = ch;
            break;
        }
    }
    ans == '\0' ? cout<<"No non-repeating character found\n" : 
                  cout<<ans<<" is non-repeating!\n";


    //Q90 Write a program to Find first repeating character.
    string s3 = "babbceed";

    unordered_map <char, int> alphFreq;

    for(char ch : s3){
        alphFreq[ch]++;
    }

    char ans = '\0';
    for(char ch : s3){
        if(alphFreq[ch] != 1){
            ans = ch;
            break;
        }
    }
    ans == '\0' ? cout<<"No repeating character found\n" : 
                  cout<<ans<<" is 1st-repeating element!\n";

    //Q91.
    cout<<isAnagram(s1, s2)<<endl;

    //Q92 Write a program to Find maximum occurring character.
    string s3 = "babbceed";

    unordered_map <char, int> alphFreq;

    for(char ch : s3){
        alphFreq[ch]++;
    }

    char ans = '\0';
    int maxFreq = -1;
    for(auto itr : alphFreq){
        if(maxFreq < itr.second){
            maxFreq = itr.second;
            ans = itr.first;
        }
    }

    cout<<ans<<endl;


    return 0;
}
