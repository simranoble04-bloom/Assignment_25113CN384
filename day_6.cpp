#include<iostream>
using namespace std;

int main(){
  //21. Write a program to Convert decimal to binary.
    int n, res=0;
    cout<<"Enter n: ";
    cin>>n;

    while(n>0){
        int d=n%2;
        res=(res+d)*10;
        n/=2;
    }
    cout<<"decimal to binary "<<" is : "<<res<<endl;

  //22. Write a program to Convert binary to decimal.
    int n, res=0, pwr=0;
    cout<<"Enter n: ";
    cin>>n;

    while(n>0){
        int d=n%10;
        res+=(d*pow(2, pwr));
        n/=10;
        pwr++;
    }
    cout<<"binary to decimal "<<" is : "<<res<<endl;

  /*23. Write a program to Count set bits in a number
          Set bits = count of 1s in the binary number  */
    int n, setBits=0;
    cout<<"Enter n: ";
    cin>>n;

    while(n>0){
        if(n%10==1){
            setBits++;
        }
        n/=10;
    }
    cout<<"No of set bits: "<<setBits<<endl;

    //24. Write a program to Find x^n without pow().
    int n, pow, res=1;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Enter power: ";
    cin>>pow;
    
    cout<<n<<"^"<<pow<<" = ";
    while(pow>0){
        res*=n;
        pow--;
    }
    cout<<res<<endl;



  return 0;
}


