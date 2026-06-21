#include <bits/stdc++.h>
using namespace std;


int main(){

    //Q81 Write a program to Find string length without strlen().
    string s1 = "Hello World!";
    int length = 0, i=0;
    while(s1[i] != '\0'){
        length++;
        i++;
    }
    cout<<length<<endl;

    //Q82 Write a program to Reverse a string.
    string s2 = "Hello world!";
    reverse(s2.begin(), s2.end());
    cout<<s2<<endl;

    //Q83 Write a program to Count vowels and consonants.
    string s3 = "Hello world!";

    transform(s3.begin(), s3.end(), s3.begin(), ::tolower);
    int i=0;

    int vow=0, cons=0;
    while(s3[i] != '\0'){
        if(s3[i] == 'a' || s3[i] == 'e' || s3[i] == 'i' || s3[i] == 'o' || s3[i] == 'u'){
            vow++;
        }
        else{
            cons++;
        }
    }
    cout<<"Total number of Vowels: "<<vow<<endl;
    cout<<"Total number of Consonants: "<<cons<<endl;

    //Q84 Write a program to Convert lowercase to uppercase.
    string s4 = "Hello world!";
    transform(s4.begin(), s4.end(), s4.begin(), ::toupper);
    cout<<s4<<endl;


    return 0;
}
