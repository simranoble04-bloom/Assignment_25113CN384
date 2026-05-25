#include<iostream>
#include<cmath>
using namespace std;

int main(){

    //17. Write a program to Check perfect number.
    int n, sum=0;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<n; i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"Yes, it's perfect number\n";
    }
    else{
        cout<<"No, it's not a perfect number\n";
    }

  //18. Write a program to Check strong number(num = sum of the factorials of its digits)
    int n, sum=0, n_cpy;
    cout<<"Enter n: ";
    cin>>n;
    n_cpy=n;

    while(n_cpy>0){
        int d=n_cpy%10, fact=1;
        for(int i=1; i<=d; i++){
            fact*=i;
        }
        sum+=fact;
        n_cpy/=10;
    }
    if(sum==n){
        cout<<"Yes, it's a strong number\n";
    }
    else{
        cout<<"No, it's not a strong number\n";
    }

  //19. Write a program to Print factors of a number.
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            cout<<i<<"\t";
        }
    }

  //20. Write a program to Find largest prime factor.
    int n, a[20], indx=0;
    cout<<"Enter n: ";
    cin>>n;

    for(int i=1; i<=n/2; i++){
        if(n%i==0){
            int is_prime=1;
            for(int j=2; j*j<=i; j++){
                if(i%j==0){
                    is_prime=0;
                    break;
                }
            }
            if(is_prime){
                a[indx]=i;
                indx++;
            }
        }
    }
    cout<<"largest prime factor of "<<n<<" is : "<<a[indx-1]<<endl;

    

    return 0;
}
