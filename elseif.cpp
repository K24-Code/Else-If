#include<iostream>
using namespace std;
int main() 
{
    int Total_marks;
    cout<<"Enter your total marks: ";
    cin>>Total_marks;

    if(Total_marks>90){
        cout<<"your grade is A"<<endl;
    }
    else if(Total_marks>80){
        cout<<"your grade is B"<<endl;
    }
    else if(Total_marks>70){
        cout<<"your grade is C"<<endl;
    }
    else if(Total_marks>60){
        cout<<"your grade is D"<<endl;
    }
    else if(Total_marks>50){
        cout<<"your grade is E"<<endl;
    }
    else{
        cout<<"you have to give RETEST"<<endl;
    }
    return 0;
}