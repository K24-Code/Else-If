#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;

    if(num>0){
        cout<<"The given number is a positive number"<<endl;
    }
    else if(num==0){
        cout<<"The given number is zero"<<endl;
    }
    else{
        cout<<"The given number is negative"<<endl;
    }
    return 0;
}