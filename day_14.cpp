#include <bits/stdc++.h>
using namespace std;

int main(){
    //53. Write a program to Linear search.
    int a[50], n, target, key=0, indx;
    cout<<"Enter n: ";
    cin>>n;

    //input to array a
    for(int i=0; i<n; i++){
        cout<<"Enter a["<<i<<"]: ";
        cin>>a[i];
    }
    
    //linear search
    cout<<"Enter target: ";
    cin>>target;

    for(int i=0; i<n; i++){
        if(a[i]==target){
            key = 1;
            indx=i;
            break;
        }
    }
    key==1 ? cout<<target<<" Found at index: "<<indx<<"\n" : cout<<target<<"doesn't found!"<<"\n";

    //54. Write a program to find Frequency of an element
    //Frequency: number of times an element appears in a collection of data
    int freq=0, el;
    cout<<"Enter element whose freq to be found: ";
    cin>>el;

    //for calc freq
    for(int i=0; i<n; i++){ //using array a[]
        if(a[i]==el) {
            freq++;
        }
    }
    cout<<"The freq of "<<el<<" is: "<<freq<<"\n";

    //55. Write a program to Second largest element.
    int lrg =INT_MIN, secLrg=INT_MIN, indx_Lrg;

    //for 1st largest
    for(int i=0; i<n; i++){ //using array a[]
        if(a[i]>lrg){
            lrg=a[i];
            indx_Lrg = i;
        }
    }
    //for 2nd largest
    for(int i=0; i<n; i++){
        if(a[i]>secLrg && i!=indx_Lrg){
            secLrg=a[i];
        }
    }
    cout<<"largest = "<<lrg<<"\n";
    cout<<"second Largest = "<<secLrg<<"\n";

    //56. Write a program to Find duplicates in array.
    bool found=0;
    for(int i=0; i<n; i++){
        bool alreadyChecked=0;
        //for checking if el has checked already
        for(int j=0; j<i; j++){
            if(a[i]==a[j]){
                alreadyChecked = 1;
                break;
            }
        }
        if(alreadyChecked){
            continue;
        }
        //for checking if duplicates exists
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                found = 1;
                cout << a[i] << " has duplicate\n";
                break;
            }
        }
    }
    if(!found){ //found==false
        cout << "No duplicates found\n";
    }

    return 0;
}
