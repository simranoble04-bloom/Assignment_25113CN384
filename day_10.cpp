#include<iostream>
#include<cmath>
using namespace std;

int main(){

    /*37. Write a program to Print star pyramid.
                *
               ***
              *****
             *******
            *********  
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){ //spaces
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){ //stars
            cout<<"*";
        }
        cout<<endl;
    }

  /*38. Write a program to Print reverse pyramid.
                *********
                 *******
                  *****
                   ***
                    *
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<i; j++){ //spaces
            cout<<" ";
        }
        for(int j=1; j<=((n*2)-(2*i-1)); j++){ //stars
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
