#include<iostream>
#include<climits>
using namespace std;
int main(){
    int nums[]={10,20,30,40,50};
    int size=5;
    int smallest= INT_MAX;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest=nums[i];
        }
    }
    cout<<"The smallest number is: "<<smallest<<endl;
    return 0;
}