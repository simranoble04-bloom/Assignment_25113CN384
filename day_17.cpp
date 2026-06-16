#include<bits/stdc++.h>
using namespace std;

void printVector(const vector <int> vec){
    for(int val : vec){
        cout<<val<<" ";
    } cout<<endl;
}

int main(){

   //Q65 Write a program to Merge arrays.
   vector <int> vec1 = {3, 1, 2, 5, 4};
   vector <int> vec2 = {7, 6, 9, 8, 10};
   vector <int> resVec(vec1.size()+vec2.size());

   sort(vec1.begin(), vec1.end()); 
   sort(vec2.begin(), vec2.end());

   merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), resVec.begin());
   printVector(resVec);

   //Q66. Write a program to find Union of arrays.
   vector <int> vec1 = {3, 1, 2, 5, 4};
   vector <int> vec2 = {4, 5, 8, 7, 6};
   vector <int> resVec(vec1.size()+vec2.size());

   sort(vec1.begin(), vec1.end()); 
   sort(vec2.begin(), vec2.end());

   auto itr = set_union(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), resVec.begin());
   resVec.resize(itr - resVec.begin());
   printVector(resVec);

   //Q67 and 68. Write a program to find Intersection of arrays or to find common elements.
   //Common el are same as the intersection 
   vector <int> vec1 = {3, 1, 2, 5, 4};
   vector <int> vec2 = {4, 5, 8, 7, 6};
   vector <int> resVec(vec1.size()+vec2.size());

   sort(vec1.begin(), vec1.end()); 
   sort(vec2.begin(), vec2.end());

   auto itr = set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), resVec.begin());
   resVec.resize(itr - resVec.begin());
   printVector(resVec);


    return 0;
}
