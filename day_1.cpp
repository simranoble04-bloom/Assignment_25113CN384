#include<iostream>
using namespace std;
int main() {
    // 1. Write a program to Calculate sum of first N natural numbers. 
    int n, sum=0;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    cout<<"sum: "<<sum<<endl;

    // 2. Write a program to Print multiplication table of a given number.
    int n;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=10; i++){
        cout<<i<<" * "<<n<<" = "<<(i*n)<<endl;
    }

    //3. Write a program to Find factorial of a number.
    int n, fact=1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;

    //4. Write a program to Count digits in a number.
    int n, dig=0, n_cpy;
    cout<<"Enter n: ";
    cin>>n;
    n_cpy=n;
    while (n_cpy>0){
        n_cpy/=10;
        dig++;
    }
    cout<<"The number of digits in "<<n<<" is: "<<dig<<endl;


    
    return 0;
}
