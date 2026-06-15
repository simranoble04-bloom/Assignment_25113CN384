#include<bits/stdc++.h>
using namespace std;

void printVector(const vector <int>& a){
    for(int val : a){
        cout<<val<<" ";
    }cout<<endl;
}

//Q57. Write a program to Reverse array.
//Method 1.
void reverseVector(vector <int>& a){
    int st=0, end=a.size()-1; 
    while(st<=end){
        swap(a[st], a[end]);
        st++, end--;
    }
}

//Q60. Write a program to Move zeroes to end.
void zeroAtEnd(vector <int>& a){
    int nZ=0, pstn=0;
    for(int val : a){ //moves non-zero val at begining
        if(val == 0){
            nZ++;
        }
        else{
            a[pstn] = val;
            pstn++;
        }
    }
    int i = a.size()-1;
    while(nZ!=0){ //moves zeros at end
        a[i]=0;
        nZ--, i--;
    }
}


int main(){
    //57. 
    vector <int> vec1 = {1, 2, 3, 4, 5};
    reverseVector(vec1); //Method 1
    printVector(vec1);

    vector <int> vec2 = {10, 20, 30, 40, 50};
    reverse(vec2.begin(), vec2.end()); //Method 2 -> using STL
    printVector(vec2);

    //Q58. Write a program to Rotate array left.
    vector <int> vec2 = {10, 20, 30, 40, 50};
    int n;
    cout<<"Enter n - by what place array will rotate? ";
    cin>>n;
    rotate(vec2.begin(), vec2.begin()+n, vec2.end()); //Using STL
    printVector(vec2);

    //Q59. Write a program to Rotate array right.
    vector <int> vec3 = {10, 20, 30, 40, 50};
    int n;
    cout<<"Enter n - by what place array will rotate? ";
    cin>>n;
    rotate(vec3.rbegin(), vec3.rbegin()+n, vec3.rend()); //Using STL
    printVector(vec3);

    //Q60.
    vector <int> vec = {0, 1, 0, 3, 12};
    zeroAtEnd(vec);
    printVector(vec);


    return 0;
}
