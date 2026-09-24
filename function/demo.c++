#include<iostream>
using namespace std;

//function definiton
int printHello(){
    cout<<"Hello\n";
    return 3;

}

int main(){
//function call /invoke
int val = printHello();
cout<<"val="<<val<<endl;
}