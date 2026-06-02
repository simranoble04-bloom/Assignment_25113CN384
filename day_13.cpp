#include <bits/stdc++.h>
using namespace std;

int main(){
    //49. Write a program to Input and display array.
    int a[50], n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        cout<<"Enter a["<<i<<"]: ";
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<"\t";
    }

    //50. Write a program to Find sum and average of array.
    int sum=0, avg;
    for(int i=0; i<n; i++){ //using array a[]
        sum+=a[i];
    }
    cout<<"\nSum = "<<sum<<"\n";
    avg = sum/n;
    cout<<"Average = "<<avg<<"\n";

    //51. Write a program to Find largest and smallest element.
    int lrg =INT_MIN, sml=INT_MAX;
    for(int i=0; i<n; i++){ //using array a[]
        lrg = max(lrg, a[i]);
        sml = min(sml, a[i]);
    }
    cout<<"largest = "<<lrg<<"\n";
    cout<<"smallest = "<<sml<<"\n";

    //52. Write a program to Count even and odd elements.
    int odd=0, even=0;
    for(int i=0; i<n; i++){
        a[i]%2==0 ? even++ : odd++;
    }
    cout<<"Number of odd elements: "<<odd<<"\n";
    cout<<"Number of even elements: "<<even<<"\n";

    
    return 0;
}
