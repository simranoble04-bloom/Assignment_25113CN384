#include<iostream>
using namespace std;

int main(){

    //9. Write a program to Check whether a number is prime.
    int n, is_prime=1;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            is_prime = 0;
            break;
        }
    }
    if(is_prime){
        cout<<n<<" is prime!\n";
    }
    else{
        cout<<n<<" is NOT prime!\n";
    }

    //10. Write a program to Print prime numbers in a range.
    int n, is_prime;
    cout<<"Enter n: ";
    cin>>n;
    
    for(int i=2; i<=n; i++){
        is_prime=1;
        for(int j=2; j*j<=i; j++){
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            cout<<i<<"\t";
        }
    }

    /*11. Write a program to Find GCD of two numbers.
          Euclidean Algorithm → repeatedly replace (a,b) by (b, a%b) until remainder becomes 0*/
    int n1, n2;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    
    if(n2>n1){
        int t=n1;
        n1=n2;
        n2=t;
    }
    while(n2>0){
        int p=n1;
        n1=n2;
        n2=(p%n1);
    }
    cout << "GCD = " << n1;

    /*12. Write a program to Find LCM of two numbers.
          LCM = (n1*n2)/GCD */
    int n1, n2, a, b, GCD, LCM;
    cout<<"Enter n1: ";
    cin>>n1;
    cout<<"Enter n2: ";
    cin>>n2;
    a=n1, b=n2;
    if(b>a){
        int t=n1;
        a=b;
        b=t;
    }
    while(b>0){
        int p=a;
        a=b;
        b=(p%a);
    }
    GCD = a;
    LCM = (n1*n2)/GCD;
    cout<<"LCM of n1 & n2 is : "<<LCM<<endl;

    return 0;
}
