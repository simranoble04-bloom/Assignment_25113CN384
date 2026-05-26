#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //29. Write a program to Print half pyramid pattern
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

  /*30. Write a program to Print number triangle.
       1
       12
       123
       1234
       12345
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

  /*31. Write a program to Print character triangle.
       A
       AB
       ABC
       ABCD
       ABCDE        
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        char ch='A';
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }

  /*32. Write a program to Print repeated-number pattern.
       1
       22
       333
       4444
       55555      
    */
    int n;
    cout<<"Enter number: ";
    cin>>n;

    for(int i=1; i<=n; i++){
        char ch='A';
        for(int j=1; j<=i; j++){
            cout<<i;
            ch++;
        }
        cout<<endl;
    }

    return 0;
}
