#include<iostream>
#include<cmath>
using namespace std;

int main(){
 
    /*33. Write a program to Print reverse star pattern.
       *****
       ****
       ***
       **
       *     
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

  /*34. Write a program to Print reverse number triangle.
      12345
      1234
      123
      12
      1     
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=n; i>0; i--){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

  /*35 Write a program to Print repeated character pattern.
      A
      BB
      CCC
      DDDD
      EEEEE     
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    char ch='A';
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }

  /*36. Write a program to Print hollow square pattern.
    *****
    *   *
    *   *
    *   *
    *****     
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        if(i==1 || i==n){
            for(int j=1; j<=n; j++){
                cout<<"*";
            }
        }
        else{
            for(int j=1; j<=n; j++){
                if(j==1 || j==n){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }


    return 0;
}
