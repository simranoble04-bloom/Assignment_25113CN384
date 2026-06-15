#include<bits/stdc++.h>
using namespace std;

void printVector(const vector <int>& a){
    for(int val : a){
        cout<<val<<" ";
    }cout<<endl;
}

//Q61. Write a program to Find missing number in array.
int missingNumber(vector <int>& a){
    sort(a.begin(), a.end());
    int num = 1;
    for(int val : a){
        if(val==num) num++;
        else return num;
    }
}

//Q62. Write a program to Find  maximum frequency element.
int maxFreqEl(vector <int>& a){
    sort(a.begin(), a.end());
    int freq=1, maxFreq=1, num=a[0], el=a[0];
    for(int i=0; i<a.size()-1; i++){
        if(a[i] == el){
            freq++;
        }
        else{
            el = a[i];
            maxFreq = max(maxFreq, freq);
            if(maxFreq == freq) num=a[i-1] ;
            freq=1;
        }
    } return num;
}
//Q63. Write a program to Find pair with given sum.
void twoSum(vector <int>& a, int target){
    sort(a.begin(), a.end());
    int st=0, end=a.size()-1;
    while(st<end){
        int sum=a[st]+a[end];
        if(sum==target){
            cout<<"["<<st<<", "<<end<<"]"<<endl;
            return;
        }
        if(sum<target) st++;
        else end--;
    }
    cout<<"No two element exists!\n";
}
//Q64. Write a program to Remove duplicates from array.
void removeDuplicates(vector <int>& a){
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
}

int main(){

    //Q61.
    vector <int> vec = {2, 4, 1, 5};
    cout<<"Missing Number is: "<<missingNumber(vec)<<"\n";
  
    //Q62.
    vector <int> vec = {2, 4, 2, 6, 3, 1, 5, 2};
    cout<<"Maximum freq element is: "<<maxFreqEl(vec)<<"\n";
  
    //Q63.
    vector <int> vec = {1, 2, 3, 5, 8};
    twoSum(vec, 7);
    twoSum(vec, 4);
    twoSum(vec, 15);

    //Q64.
    vector <int> vec = {2, 2, 4, 1, 5, 1, 4, 7, 8};
    removeDuplicates(vec);
    printVector(vec);
    

    return 0;
}
