#include<iostream>
using namespace std;
int main(){
    int n=4;
 
 for(int i =0; i<=n; i++){
   //space
   for(int j=0;j<=n-i-1;j++){
    cout<<" ";
   }
   //number1
   for(int j=0;j<=i+1;j++){
    cout<<j+1;
   }
   //number 2
   for(int j=i;j>=0;j--){
    cout<<j+1;
   }
 cout<<endl;
} 
return 0;
} 