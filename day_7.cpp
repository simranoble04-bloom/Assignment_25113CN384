#include<iostream>
#include<cmath>
using namespace std;

//25. Write a program to Recursive factorial.
int factorial(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*factorial(n-1);
}

//26. Write a program to Recursive Fibonacci.
int Fibonacci(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return Fibonacci(n-1)+Fibonacci(n-2);
}

//27. Write a program to Recursive sum of digits.
int sumDgt(int n){
    if(n==0){
        return 0;
    }
    return (n%10)+sumDgt(n/10);
}

//28. Write a program to Recursive reverse number.
int rev=0;
int revNum(int n){
    if(n==0){
        return rev;
    }
    rev = rev*10 + (n%10);
    return revNum(n/10);
}

int main(){

  //25.
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Factorial of "<<num<<" is: "<<factorial(num);

  //26.
    int num;
    cout<<"Enter number: ";
    cin>>num;

    for(int i=1; i<=num; i++){
        cout<<Fibonacci(i)<<"\t";
    }

  //27.
    int num;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"sum of digits of "<<num<<" is: "<<sumDgt(num)<<endl;

  //28.
    int num;
    cout<<"Enter number: ";
    cin>>num;

    cout<<"reverse of "<<num<<" is: "<<revNum(num)<<endl;


    return 0;
}
