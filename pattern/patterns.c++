// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
// for(int i=1;i<=5;i++){
  
//     for(int j=1;j<=n; j++){
//         cout<<j<<"";
  
// } 
// cout<<n<<endl;
//  }
  
// }
// #include<iostream>
// using namespace std;
//  int main(){
//     int n;
//    n=5;
// for(int i=n;i>=1;i--){
  
//     for(int j=1;j<=n; j++){
    
  
// } 
//   cout<<"*"<<" "<<endl;
//  }
  
// } 

#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=0;i<=n;i++){//outer line 
        char ch='A';
        for(int j=0;j<=i;j++){//inner line starts the first charachter.
            cout<<ch<<" ";
            ch++;
        }cout<<endl;

    }
}
