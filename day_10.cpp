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

    /*39. Write a program to print number pyramid.
                1
               121
              12321
             1234321
            123454321 
    */

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        //spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        //1st half of pyr.
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //2nd half of pyr.
        for(int j=i-1; j>0; j--){
            cout<<j;
        }
        cout<<"\n";
    }

    /*40. Write a program to print character pyramid.
                A
               ABA
              ABCBA
             ABCDCBA
            ABCDEDCBA 
    */

    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        //spaces
        for(char j=1; j<=n-i; j++){
            cout<<" ";
        }
        //1st half of pyr.
        char ch='A';
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch++;
        }
        //2nd half of pyr.
        ch=ch-2;
        for(int j=i-1; j>0; j--){
            cout<<ch;
            ch--;
        }
        cout<<"\n";
    }

    
    return 0;
}
