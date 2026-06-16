#include<bits/stdc++.h>
using namespace std;

void printVector(const vector <int> vec){
    for(int val : vec){
        cout<<val<<" ";
    } cout<<endl;
}

//Q69. Write a program to Bubble sort.
void bubbleSort(vector <int>& vec){
    int n = vec.size();
    for(int i=0; i<n-1; i++){
        int isSwap=false;
        for(int j=0; j<n-i-1; j++){
            if(vec[j]>vec[j+1]){
                isSwap = true;
                swap(vec[j], vec[j+1]);
            }
        }
        if(!isSwap) return;
    }
}

//Q70. Write a program to Selection sort.
void selectionSort(vector <int>& vec){
    int n = vec.size(), indx=0;
    for(int i=0; i<n; i++){
        int min=vec[i];
        for(int j=i+1; j<n; j++){
            if(min>vec[j]){
                min=vec[j];
                indx=j;
            }
        }
        if(i!=indx) swap(vec[i], vec[indx]);
    }
    
}

//Q71. Write a program to Binary search : it works on sorted array/vector only.
int binarySearch(vector <int>& vec, int target){
    int n = vec.size();
    int st=0, end=n-1, mid;
    while(st<=end){
        mid = st + (end-st)/2;
        if(vec[mid]==target) return mid; //returns indx
        if(vec[mid]>target) end=mid-1;
        else st=mid+1;
    }
    return -1; //if not found
}

int main(){

   //Q69.
   vector <int> vec1 = {3, 1, 2, 5, 4};
   bubbleSort(vec1);
   printVector(vec1);

   //Q70.
   vector <int> vec1 = {3, 1, 2, 5, 4};
   selectionSort(vec1);
   printVector(vec1);

   //Q71.
   vector <int> vec1 = {1, 2, 3, 4, 5};
   cout<<binarySearch(vec1, 5)<<endl;

   //Q72. Write a program to Sort array in descending order.
   vector <int> vec1 = {4, 1, 3, 2, 5};
   sort(vec1.rbegin(), vec1.rend());
   printVector(vec1);
  

    return 0;
}
