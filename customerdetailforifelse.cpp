#include<iostream>
using namespace std;

int main (){
    
    int age;
    int bankbalance;
    string status, customerName;
    int period;

cout<<"Enter customer name: ";
getline(cin,customerName);
    cout<<"Please Enter the age: ";
    cin>>age;
    if (age>=22){
       cout<<"Enter bank balance: ";
    cin>>bankbalance;
    if(bankbalance>50000){
         cout<<"Enter CRB status of customer: ";
    cin>>status;
    if(status=="good"){
      cout<<"Enter customer banking period: ";
    cin>>period;
    if (period>6){
        cout<<"Approve "+customerName+" for a loan";   
    }else{
        cout<<customerName+" is not qualified for a loan";
    }}}}
    else{
        cout<<"Reject a loan. ";
    }

}    