#include <bits/stdc++.h>
using namespace std;

//41. Write a program to Write function to find sum of two numbers.
int sum(int a, int b){
    return (a+b);
}

//42. Write a program to Write function to find maximum of two numbers.
int maximum(int a, int b){
    int c = max(a, b);
    return c;
}
//43. Write a program to Write function to check prime.
void isPrime(int n){
    int key=1;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            key=0;
            break;
        }
    }
    key==1 ? cout<<n<<" is prime\n" : cout<<n<<" is not prime\n";
}

//44. Write a program to Write function to find factorial.
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    //41.
    cout<<"Sum: "<<sum(4, 6)<<endl;

    //42.
    cout<<"Maximum is: "<<maximum(4, 6)<<endl;

    //43.
    isPrime(5);

    //44.
    cout<<"Factorial is: "<<factorial(5)<<endl;

    return 0;
}
