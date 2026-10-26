#include<iostream>
using namespace std;

int gcd(int a,int b){
    while(a>0 && b>0){
        if(a<b){
            a=a%b;
        }
    }
    if(a==0)return b;
    return a;
}
int gcdRec(int a,int b){
    if(b==0)return b;
    return gcdRec(b,a%b);
}
int main(){
    cout<<gcd(20,28)<<endl;
    return 0;

}