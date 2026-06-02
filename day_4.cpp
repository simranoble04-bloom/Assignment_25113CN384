#include<iostream>
using namespace std;

int main(){

    //13. Write a program to Generate Fibonacci series.
    int n, a = 0, b = 1;
    cout << "Enter number of terms: "; 
    cin >> n;
    cout << "Fibonacci Series: ";
    for(int i = 1; i <= n; i++){
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }

    //14. Write a program to Find nth Fibonacci term.
    int n, a = 0, b = 1;
    cout << "Enter number of terms: ";
    cin >> n;

    if(n==1){
        cout<<a<<endl;
    }
    else if(n==2){
        cout<<b<<endl;
    }
    else{
        for(int i=3; i<=n; i++){
            int c=a+b;
            a=b;
            b=c;
        }
        cout<<b<<endl;
    }

    //15. Write a program to Check Armstrong number
    int n, dig=0, n_cpy, res=0;
    cout << "Enter number: ";
    cin >> n;
    n_cpy=n;

    while(n_cpy>0){
        dig++;
        n_cpy/=10;
    }
    n_cpy=n;
    while(n_cpy>0){
        int t=n_cpy%10;
        res+=pow(t, dig);
        n_cpy/=10;
    }
    cout<<res<<endl;
    if(n==res){
        cout<<"YES!, "<<n<<" is armstrong\n";
    }
    else{
        cout<<"NO!, "<<n<<" is not an armstrong\n";
    }

    //16.Write a program to Print Armstrong numbers in a range.
    int n;
    cout << "Enter number: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        int dig=0;
        int i_cpy = i;
        while(i_cpy>0){
            dig++;
            i_cpy/=10;
        }
        i_cpy = i;
        int res=0;
        while(i_cpy>0){
            int d=i_cpy%10;
            res+=pow(d, dig);
            i_cpy/=10;
        }
        if(i==res){
            cout<<i<<"\t";
        }
    }
    
    return 0;
}
