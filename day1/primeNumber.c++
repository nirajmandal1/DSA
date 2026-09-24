#include<iostream>
using namespace std;
int main() {
    int n ;
    cout<<"enter a number: ";
    cin>>n;
    bool isPrime = true;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
}