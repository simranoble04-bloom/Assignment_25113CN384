#include <iostream>
using namespace std:

int main(){
  //5. WAP to find the sum of digits of a number
    int n, sum=0, n_cpy, d; 
    cout<<"Enter n: ";
    cin>>n;
    n_cpy=n;
    while(n_cpy>0){
        d=n_cpy%10;
        sum+=d;
        n_cpy/=10;
    }
    cout<<"Sum of digits of "<<n<<" is : "<<sum<<endl;

    //6. Write a program to Reverse a number
    int n, n_rev=0, n_cpy, d;
    cout<<"Enter n: ";
    cin>>n;
    n_cpy=n;
    while(n_cpy>0){
        d=n_cpy%10;
        n_rev = n_rev*10 + d;
        n_cpy/=10;
    }
    cout<<"reverse of digits of "<<n<<" is : "<<n_rev<<endl;

    //7. Write a program to Find product of digits
    int n, n_prdct=1, n_cpy, d;
    cout<<"Enter n: ";
    cin>>n;
    n_cpy=n;
    while(n_cpy>0){
        d=n_cpy%10;
        n_prdct *= d;
        n_cpy/=10;
    }
    cout<<"product of digits of "<<n<<" is : "<<n_prdct<<endl;

  //8. Write a program to Check whether a number is palindrome (i.e, number=reverse).
    int n, n_rev=0, n_cpy, d;
    cout<<"Enter n: ";
    cin>>n;
    n_cpy=n;
    while(n_cpy>0){
        d=n_cpy%10;
        n_rev = n_rev*10 + d;
        n_cpy/=10;
    }
    if(n==n_rev){
        cout<<"yes "<<n<<" is palidrome"<<endl;
    }
    else{
        cout<<"NO "<<n<<" is NOT a palidrome"<<endl;
    }

  return 0;

}
