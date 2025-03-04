#include<iostream>
using namespace std;
int main(){

    int age;
    cout<<"Enter your Age: ";
    cin>>age;

    if(age<13)  {
        cout<<"child"<<endl;
    }

    else if(age >= 1 and age<=18)   {
        cout<<"Growing stage"<<endl;
    } 

    else   {
        cout<<"adult"<<endl;
    }
    return 0;
}