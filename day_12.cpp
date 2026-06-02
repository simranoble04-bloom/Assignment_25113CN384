#include <bits/stdc++.h>
using namespace std;

//45. Write a program to Write function for palindrome.
void palindrome(int n){
    int nCpy = n, rev=0;
    while(nCpy>0){
        int d=nCpy%10;
        rev = rev*10 + d;
        nCpy/=10;
    }
    rev==n ? cout<<n<<" is Palindrome!\n" : cout<<n<<" is NOT Palindrome!\n";
}

//46. Write a program to Write function for Armstrong.
void Armstrong(int n){
    int nCpy = n, dig=0, res=0;
    while(nCpy>0){
        nCpy/=10;
        dig++;
    }
    nCpy = n;
    while(nCpy>0){
        int d=nCpy%10;
        res += pow(d, dig);
        nCpy/=10;
    }
    res==n ? cout<<n<<" is Armstrong!\n" : cout<<n<<" is NOT Armstrong!\n";
}

//47. Write a program to Write function for Fibonacci.
void Fibonacci(int n){
    int a=0, b=1;
    if(n==1){
        cout<<a<<endl;
    }
    else if(n==2){
        cout<<a<<"\t"<<b<<"\n";
    }
    else{
        for(int i=1; i<=n; i++){
            cout<<a<<"\t";
            int n=a+b;
            a=b;
            b=n;
        }
    }
    cout<<"\n";
}

//48. Write a program to Write function for perfect number.
void perfectNum(int n){
    int sum=0;
    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    sum==n ? cout<<n<<" is a perfect number!\n" : cout<<n<<" is NOT a perfect number!\n";
}

int main(){
    //45.
    palindrome(1221);
    palindrome(123);

    //46.
    Armstrong(153);
    Armstrong(123);
    
    //47.
    Fibonacci(6);

    //48.
    perfectNum(6);
    perfectNum(7);

    return 0;
}
