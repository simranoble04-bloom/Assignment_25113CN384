#include<iostream>
using namespace std;
int main() {
    // Write a program to Calculate sum of first N natural numbers.
    int n, sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"sum: "<<sum;
    
    return 0;
}
